//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string.h>
#include <iostream>
#include<fstream>

#include "Unit1.h"
#include "Unit2.h"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TLabel *L;
TPanel *P;
TEdit *E;
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

void __fastcall TForm1::DeleteNoteClick(TObject *Sender)
{
//
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ClearClick(TObject *Sender)
{
	for (int i = 0; i < ListView1->Items->Count; i++) {
		ListView1 -> Items->Item[i]->Checked = false;
	}
	ListView1-> Checkboxes = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChooseNoteClick(TObject *Sender)
{
	ListView1-> Checkboxes = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::AddNoteClick(TObject *Sender)
{
	Form2->Visible=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::loadClick(TObject *Sender)
{
	ifstream F;
	string name;
	string text;
	F.open("Notes.txt");
	int i = 0;
	while ((F.is_open())&&(!F.eof()))
			{

				F >> notes[i].name;
				F >>  notes[i].text;
				i++;
			}

		F.close();
	for (int i = 0; i < ListView1->Items->Count; i++) {
		ListIt = ListView1->Items->Add();
		ListIt	-> Caption = notes[i].name.c_str();
		ListIt	-> SubItems -> Add(notes[i].text.c_str());
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::saveClick(TObject *Sender)
{
	ofstream F;
	F.open("Notes.txt");
	if((F.is_open())&&(!F.eof()))
		{
			for (int i=0; i < ListView1->Items->Count; i++) {

			F << notes[i].name<<endl;
			F << notes[i].text;
			}
		}
		F.close();
}
//---------------------------------------------------------------------------

