//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"

using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
AnsiString t;
AnsiString n;
TTimer *Timer1;
int interval;
unsigned short hourDTP, minuteDTP, secondDTP, msDTP,
dayDTP, monthDTP, yearDTP,daysYDDTP;


int daysInMonth(int year, int month)
{
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	else if (month == 2)
		return (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))? 29 : 28);
	else
		return 31;
}
int dayOfYear(int year, int month, int day)
{
	int days = 0;
	for (int i=1; i<month; i++)
		days += daysInMonth(year, i);
	return days + day;
}


//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	interval = -1;
	hourDTP = 0;
	minuteDTP = 0;
	secondDTP = 0;
	msDTP = 0;
	dayDTP = 0;
	monthDTP = 0;
	yearDTP = 0;
	daysYDDTP = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AddNoteClick(TObject *Sender)
{
		n = NameOfNote -> Text;
		t = TextOfNote -> Text;
		notes.push_back(Note(n.c_str(), t.c_str(),yearDTP,daysYDDTP,
		hourDTP,minuteDTP,secondDTP));
		Form1 -> ListIt = Form1 -> ListView1->Items->Add();
		Form1 -> ListIt	-> Caption = notes[Form1->ListIt->Index].name.c_str();
		Form1->ListIt->SubItems->Add(notes[Form1->ListIt->Index].text.c_str());
		NameOfNote->Clear();
		TextOfNote->Clear();
		Form2 -> Close();
			interval = -1;
			hourDTP = 0;
			minuteDTP = 0;
			secondDTP = 0;
			msDTP = 0;
			dayDTP = 0;
			monthDTP = 0;
			yearDTP = 0;
			daysYDDTP = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AddReminderClick(TObject *Sender)
{

	DateTimePicker1->DateTime.CurrentDate();
	DateTimePicker2->DateTime.CurrentTime();
	TDateTime date = DateTimePicker1->Date;

	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	int hourLocal = timeinfo->tm_hour;
	int minuteLocal = timeinfo->tm_min;
	int secondLocal = timeinfo->tm_sec;
	int daysYDLocal = timeinfo->tm_yday + 1;
	int yearLocal = timeinfo->tm_year + 1900;

	TDateTime time = DateTimePicker2->Time;
		time.DecodeTime(&hourDTP, &minuteDTP,&secondDTP, &msDTP);
		date.DecodeDate(&yearDTP,&monthDTP, &dayDTP);
		daysYDDTP = dayOfYear(yearDTP, monthDTP, dayDTP);
	interval = ((yearDTP - yearLocal)*365*86400 +
	(daysYDDTP - daysYDLocal)*86400 + (hourDTP-hourLocal)*3600 +
	(minuteDTP - minuteLocal)*60 + (secondDTP-secondLocal))*1000;
	Form1->Label1->Caption = interval;

	if(interval > 0)
	{
		intervals.push_back(interval);
		noteTimer = new TTimer(Form1);
		noteTimer -> Interval = interval;
		noteTimer -> OnTimer = Form1 -> MyTimer;
	}
}

