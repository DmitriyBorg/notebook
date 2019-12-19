//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string.h>
#include <iostream>
#include<fstream.h>
#include "Unit1.h"
#include "Unit2.h"
#include "Unit4.h"
#include "time.h"
#include <System.DateUtils.hpp>
#include <IdHTTP.hpp>
#include <algorithm>
using namespace std;

#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TForm *Notification;
TLabel *L;
TPanel *P;
TEdit *E;
TTimer *noteTimer;
int interval;
vector <Note> notes;
vector <int> intervals;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner): TForm(Owner)
{

}

void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	Edit1 -> Text = "";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::AddNoteClick(TObject *Sender)
{
	Form2 ->NameOfNote->Clear();
	Form2 ->TextOfNote->Clear();
	Form2->Visible=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::loadClick(TObject *Sender)
{
	ifstream F;
	string name, full_text = "", line_text, daysYD, hour, year, second, minute;

	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	int hourLocal = timeinfo->tm_hour;
	int minuteLocal = timeinfo->tm_min;
	int secondLocal = timeinfo->tm_sec;
	int daysYDLocal = timeinfo->tm_yday + 1;
	int yearLocal = timeinfo->tm_year + 1900;

	F.open("Notes.txt");
	while(!F.eof())
	{
		getline(F, name);
		getline(F,year);
		getline(F,daysYD);
		getline(F,hour);
		getline(F,minute);
		getline(F,second);
		getline(F, line_text);
		while (line_text != " \n ") {
			full_text += line_text;
			getline(F, line_text);
			line_text = " \n " + line_text;
		}

		notes.push_back(Note(name, full_text, StrToInt(year.c_str()),
		StrToInt(daysYD.c_str()), StrToInt(hour.c_str()),
		StrToInt(minute.c_str()),StrToInt(second.c_str())));
		ListIt = ListView1->Items->Add();
		ListIt	-> Caption = name.c_str();
		ListIt -> SubItems -> Add(full_text.c_str());
			if(StrToInt(year.c_str())>0)
			{
				interval = ((StrToInt(year.c_str()) - yearLocal)*3600*86400 +
				(StrToInt(daysYD.c_str()) - daysYDLocal)*86400 +
				(StrToInt(hour.c_str())-hourLocal)*3600 +
				(StrToInt(minute.c_str())-minuteLocal)*60 +
				(StrToInt(second.c_str())-secondLocal))*1000;
				intervals.push_back(interval);
			}
			else {intervals.push_back(-1);}
		full_text = "";
	}

	F.close();
	ListView1->Items->Item[ListIt->Index]->Delete();
	notes.pop_back();

	for (int i = 0;i < intervals.size(); i++)
		{
		  if (intervals[i]!=0)
		  {
			noteTimer = new TTimer(Form1);
			noteTimer -> Interval = intervals[i];
			noteTimer -> OnTimer = &MyTimer;
		  }
		}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::saveClick(TObject *Sender)
{
	ofstream F;
	F.open("Notes.txt");
	if(!F.eof())
		{
			for (int i=0; i < ListView1->Items->Count; i++) {

				F << notes[i].name<<endl;
				F << notes[i].year<<endl;
				F << notes[i].daysYD<<endl;
				F << notes[i].hour<<endl;
				F << notes[i].minute<<endl;
				F << notes[i].second<<endl;
				F << notes[i].text<<endl<<endl;
			}
		}
		F.close();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::MyTimer(TObject *Sender)
{
	int min = 0;
   for (int i = 0; i < intervals.size(); i++) {
	 if ((intervals[min] > intervals[i]) && intervals[i] > 0)
	 {
		min = i;
	 }
   }
   TForm4 *Notification = new TForm4(this);
   TLabel *Label1 = new TLabel(Notification);
   TLabel *Label2 = new TLabel(Notification);
   TLabel *Label3 = new TLabel(Notification);
   TPanel *Panel1 = new TPanel (Notification);
   Panel1->Color = clWhite;
   Label3 -> Left = 16; Label3 ->Top = 8;
   Label2 -> Left = 150; Label2 -> Top = 122;
   Label1 -> Left = 270; Label1 -> Top = 40;

	Notification->Label1 -> Caption = notes[min].name.c_str();
	Notification->Label2 -> Caption = notes[min].text.c_str();
	Notification->Label3 -> Caption = "Напоминание";
	Notification->Visible = true;
   intervals[min] = -1;
	Label1->Caption = "истекло";
}


void __fastcall TForm1::ClearClick(TObject *Sender)
{
	ListView1->Clear();
	intervals.clear();
	notes.clear();
}


void __fastcall TForm1::SortNotesClick(TObject *Sender)
{
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	int hourLocal = timeinfo->tm_hour;
	int minuteLocal = timeinfo->tm_min;
	int secondLocal = timeinfo->tm_sec;
	int daysYDLocal = timeinfo->tm_yday + 1;
	int yearLocal = timeinfo->tm_year + 1900;

	ListView1->Clear();
	intervals.clear();
	sort(notes.begin(), notes.end());
	for (int i = 0; i < notes.size(); i++) {
		ListIt = ListView1->Items->Add();
		ListIt -> Caption = notes[i].name.c_str();
		ListIt -> SubItems -> Add(notes[i].text.c_str());
		if (notes[i].year > 0)
		{
		  interval = ((notes[i].year - yearLocal)*365*86400 +
		  (notes[i].daysYD - daysYDLocal)*86400 +
		  (notes[i].hour - hourLocal)*3600 +
		  (notes[i].minute - minuteLocal)*60 +
		  (notes[i].second - secondLocal))*1000;
		  intervals.push_back(interval);
		}
		else {intervals.push_back(-1);}
	}
}
//---------------------------------------------------------------------------

