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
		Form2 -> Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AddReminderClick(TObject *Sender)
{
		int type = 1;
}
//---------------------------------------------------------------------------

