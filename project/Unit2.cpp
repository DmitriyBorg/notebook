//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include <time.h>
#include <System.DateUtils.hpp>
#include <IdHTTP.hpp>

using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
AnsiString t;
AnsiString n;
TTimer *Timer1;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AddNoteClick(TObject *Sender)
{
		n = NameOfNote -> Text;
		t = TextOfNote -> Text;
		notes.push_back(Note(n.c_str(), t.c_str()));
		Form1 -> ListIt = Form1 -> ListView1->Items->Add();
		Form1 -> ListIt	-> Caption = notes[Form1->ListIt->Index].name.c_str();
		Form1 -> ListIt	-> SubItems -> Add(notes[Form1->ListIt->Index].text.c_str());
		NameOfNote->Clear();
		TextOfNote->Clear();
		Form2 -> Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AddReminderClick(TObject *Sender)
{

	DateTimePicker1->Date.CurrentDate();
	DateTimePicker2->Date.CurrentTime();

	TDateTime date = DateTimePicker1->Date;
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	long int futureDate;
	futureDate = DateTimeToUnix(date, true);
	TDateTime time = DateTimePicker1->Time;
	unsigned short hourDTP, minuteDTP, secondDTP, msDTP;
		time.DecodeTime(&hourDTP, &minuteDTP, &secondDTP, &msDTP);

	Timer1 = new TTimer(Form1);
	Timer1 -> Interval = DateTimeToUnix(date, true) + hourDTP*3600 + minuteDTP*60 + secondDTP - (long)seconds;
	Timer1 -> Enabled = true;
	Form1 -> Label1 ->Caption = Timer1 -> Interval;
}
//---------------------------------------------------------------------------

