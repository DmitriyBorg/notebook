//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
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
		Form1 -> name = n.c_str();
		t = ����� -> Text;
		Form1 -> text = t.c_str();

        Form1 -> ListIt = Form1 -> ListView1->Items->Add();
		Form1 -> ListIt	->	Caption = n;
		Form1 -> ListIt	->	SubItems->Add(t);
		Form2 -> Close();
}
//---------------------------------------------------------------------------

