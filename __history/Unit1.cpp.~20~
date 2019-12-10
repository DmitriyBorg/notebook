//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <list>
#include <string.h>
#include <iostream>
#include <vector>

#include "Unit1.h"
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
int num;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner): TForm(Owner)
{
	int x = 0;
}

void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	Edit1 -> Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Add(TObject *Sender)
{
	Note *note1 = new Note(ScrollBox1);
	note1 -> Parent = ScrollBox1;
	note1 -> Width = 669;
	note1 -> Top = x*45;
	note1 -> Caption = "Заметка " + IntToStr(x+1);
	newNote.push_back(note1);
	TRadioButton *B;
	B = new TRadioButton (note1);
	B ->Parent = note1;
	B -> Align = alClient;
	B -> Visible = false;
	buttons.push_back(B);
	x++;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
   /* for (int i =0; i < x; i++) {

		if(buttons[i] -> Checked)
		{
			num = i;
			delete newNote[num];
		}
	}
	x--;  */
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button3Click(TObject *Sender)
{
	for (int i =0; i < x; i++) {
	 buttons[i] -> Checked = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	for (int i =0; i < x; i++) {
	 buttons[i] -> Visible = true;
	}
}
//---------------------------------------------------------------------------

