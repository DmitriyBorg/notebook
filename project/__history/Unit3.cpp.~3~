//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
AnsiString t;
AnsiString n;
int itCount;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
		n = Name -> Text;
		t = Text -> Text;
		notes.push_back(Note(n.c_str(), t.c_str()));
		Form1 -> ListView1->Selected ->CleanupInstance() ;
		Form1 -> ListView1->Items->Add();
		Form1 -> ListView1->Selected -> Caption = notes[Form1->ListView1 ->Selected ->Index].name.c_str();
		Form1 -> ListView1->Selected -> SubItems -> Add(notes[Form1->ListView1 ->Selected ->Index].text.c_str());
		Form3->Close();
}
//---------------------------------------------------------------------------
