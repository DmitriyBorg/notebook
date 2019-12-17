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
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TLabel *L;
TPanel *P;
TEdit *E;
int interval;
vector <Note> notes;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner): TForm(Owner)
{
//
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
	string name, full_text = "", line_text;
	short daysYD = 0;
	short hour = 0;
	short year = 0;
	short minute = 0;
	short second = 0;
	F.open("Notes.txt");
	while(!F.eof())
	{
		getline(F, name);
		F >> year;
		F >> daysYD;
		F >> hour;
		F >> minute;
		F >> second;
		getline(F, line_text);
		while (line_text != " \n ") {
			full_text += line_text;
			getline(F, line_text);
			line_text = " \n " + line_text;
		}


		notes.push_back(Note(name, full_text, year,daysYD,hour,minute,second));
		ListIt = ListView1->Items->Add();
		ListIt	-> Caption = name.c_str();
		ListIt -> SubItems -> Add(full_text.c_str());
		full_text = "";
	}
		F.close();
		ListView1->Items->Item[ListIt->Index]->Delete();
		notes.pop_back();

	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	int hourLocal = timeinfo->tm_hour;
	int minuteLocal = timeinfo->tm_min;
	int secondLocal = timeinfo->tm_sec;
	int daysYDLocal = timeinfo->tm_yday + 1;
	int yearLocal = timeinfo->tm_year + 1900;

	//interval = ((yearDTP - yearLocal)*3600*86400 + (daysYDDTP - daysYDLocal)*86400 +
   //	(hourDTP-hourLocal)*3600 + (minuteDTP-minuteLocal)*60 + (secondDTP-secondLocal))*1000;




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
				F << notes[i].text<<endl;
				F << notes[i].year<<endl;
				F << notes[i].daysYD<<endl;
				F << notes[i].hour<<endl;
				F << notes[i].minute<<endl;
				F << notes[i].second<<endl<<endl;
			}
		}
		F.close();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
		 Form4 ->Visible = true;
		 //Form4 -> Label1 -> Caption = notes;
		 //Form4 -> Label1 -> Caption = notes ;
}
//---------------------------------------------------------------------------

