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
int itCount;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	itCount = 0;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::���������Click(TObject *Sender)
{
	  ��������� -> Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::�����Click(TObject *Sender)
{
	����� -> Text ="";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AddNoteClick(TObject *Sender)
{
		n = ��������� -> Text;
		t = ����� -> Text;
	    notes.push_back(Note(n.c_str(), t.c_str()));
		Form1 -> ListIt = Form1 -> ListView1->Items->Add();
		Form1 -> ListIt	-> Caption = notes[itCount].name.c_str();
		Form1 -> ListIt	-> SubItems -> Add(notes[itCount].text.c_str());

		itCount++;
		Form2 -> Close();
}
//---------------------------------------------------------------------------

