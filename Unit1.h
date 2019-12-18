//---------------------------------------------------------------------------

#ifndef Unit1H, A_H
#define Unit1H, A_H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ButtonGroup.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Data.Bind.GenData.hpp>
#include <Data.Bind.ObjectScope.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TButton *Search;
	TEdit *Edit1;
	TButton *AddNote;
	TButton *SortNotes;
	TListView *ListView1;
	TButton *load;
	TButton *save;
	TLabel *Label1;
	TButton *Clear;
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall AddNoteClick(TObject *Sender);
	void __fastcall loadClick(TObject *Sender);
	void __fastcall saveClick(TObject *Sender);
	void __fastcall MyTimer(TObject *Sender);
	void __fastcall ClearClick(TObject *Sender);
	void __fastcall SortNotesClick(TObject *Sender);
	void __fastcall SearchClick(TObject *Sender);


private:
public:	   TListItem *ListIt;
	__fastcall TForm1(TComponent* Owner);
};


class Note
{
	public:	Note(string name, string text, short year,
				 short daysYD, short hour, short minute, short second)
	{
		this -> name = name;
		this -> text = text;
		this -> year = year;
		this -> daysYD = daysYD;
		this -> hour = hour;
		this -> minute = minute;
		this -> second = second;
	};
	 short year;
	 short daysYD;
	 short hour;
	 short minute;
	 short second;

	 string name;
	 string text;
	 long interval;
};

bool operator<(const Note &x, const Note &y)
{
	return strlen(x.text.c_str()) < strlen(y.text.c_str());
}


string searchKMP(string stringToFind, string str)
{
		int n = strlen(stringToFind.c_str());
		int m = strlen(str.c_str());
		int *pi = new int[n];
		int i = 0;
		int j = 0;
		int k = 0;
		while (k != n)
			{
			 if (stringToFind[i] == stringToFind[j])
			 {
			   pi[i] = j+1;
			   i++;
			   j++;
			 }
			 else if (j==0)
					{
					 pi[i] = 0;
					 i++;
					}
					else j = pi[j - 1];
			 k++;
			}
		k = 0;
		i = 0;
		j = 0;
		while (k != m)
			{
			 if (str[i] == stringToFind[j])
				{
				  i++;
				  j++;
				  if (j == n)
				  {
				   return str;
				  }
				 }
			 else if (j == 0)
				{
				  i++;
				  if (i == m)
				  {
					return "";
				  }
				}
			 else j = pi[j-1];
			 k++;
			}
}

//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
extern vector <Note> notes;
extern vector <int> intervals;
extern TTimer *noteTimer;
//---------------------------------------------------------------------------
#endif
