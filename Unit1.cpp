//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string.h>
#include <iostream>
#include<fstream.h>

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "time.h"
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
	Form2 ->NameOfNote->Clear();
	Form2 ->TextOfNote->Clear();
	Form2->Visible=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::loadClick(TObject *Sender)
{
	ifstream F;
	string name, full_text = "", line_text;
	string temp;
	F.open("Notes.txt");
	while(!F.eof())
	{
		getline(F, name);
		getline(F, line_text);
		while (line_text != " \n ") {
			full_text += line_text;
			getline(F, line_text);
			line_text = " \n " + line_text;
		}


		ListIt = ListView1->Items->Add();
		ListIt	-> Caption = name.c_str();
		ListIt -> SubItems -> Add(full_text.c_str());
		full_text = "";
	}
		F.close();
		ListView1->Items->Item[ListIt->Index]->Delete();
		notes.erase(notes.end());
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
				F << notes[i].text<<endl<<endl;
			}
		}
		F.close();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TForm1::ListView1SelectItem(TObject *Sender, TListItem *Item, bool Selected)

{
	 Form3 -> Name -> Text = ListView1->Selected -> Caption;
	 Form3 -> Text -> Text = ListView1->Selected ->SubItems-> Strings[0];
	 Form3->Visible=true;
}
//---------------------------------------------------------------------------


