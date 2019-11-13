//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <list>
#include <string.h>

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TLabel *L;
TPanel *P;
TEdit *E;
int x;
const int num = 20;
Note *newNote[num];

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	int x = 0;
}

void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	Edit1 -> Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	newNote[x] = new Note(ScrollBox1);
	newNote[x]->Parent = ScrollBox1;
	newNote[x]->Width = 650;
	newNote[x]->Caption = "Заметка " + IntToStr(x+1);
	x++;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	delete newNote[x];
	x--;
}
//---------------------------------------------------------------------------



