//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <list>
#include <string.h>
#include <iostream>
#include <vector>

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
int x;
vector<Note*> newNote;
vector<TRadioButton*> buttons;
TListItem *ListIt;


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner): TForm(Owner)
{
	ListIt = ListView1->Items->Add();
	ListIt->Caption = "Botswana";
	ListIt->SubItems->Add("אאאגכûאכאגûחשכא");
}

void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	Edit1 -> Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeleteNoteClick(TObject *Sender)
{

  /* for (int i =0; i < x; i++) {

		if(buttons[i] -> Checked)
		{
			for (int j; j < x; j++)
			{

			}
			num = i;
			delete newNote[num];

		}
	}
	x--;              */
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ClearClick(TObject *Sender)
{
  /*	for (int i =0; i < x; i++) {
	 buttons[i] -> Checked = false;
	}   */
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChooseNoteClick(TObject *Sender)
{
  /*	for (int i =0; i < x; i++) {
	 buttons[i] -> Visible = true;
	} */
}
//---------------------------------------------------------------------------


void __fastcall TForm1::AddNoteClick(TObject *Sender)
{
	Form2->Visible=true;
}
//---------------------------------------------------------------------------

