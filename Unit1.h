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
	TButton *DeleteNote;
	TButton *Clear;
	TButton *ChooseNote;
	TButton *SortNotes;
	TListView *ListView1;
	TButton *load;
	TButton *save;
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall DeleteNoteClick(TObject *Sender);
	void __fastcall ClearClick(TObject *Sender);
	void __fastcall ChooseNoteClick(TObject *Sender);
	void __fastcall AddNoteClick(TObject *Sender);
	void __fastcall loadClick(TObject *Sender);
	void __fastcall saveClick(TObject *Sender);
	void __fastcall ListView1SelectItem(TObject *Sender, TListItem *Item, bool Selected);


private:
public:	   TListItem *ListIt;
	__fastcall TForm1(TComponent* Owner);
};


class Note
{
	public:	Note(string name, string text)
	{
		this -> name = name;
		this -> text = text;
	};

	public: Note()
	{
	}
	 string name;
	 string text;
	 int type;
};


//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
extern vector <Note> notes;
//---------------------------------------------------------------------------
#endif
