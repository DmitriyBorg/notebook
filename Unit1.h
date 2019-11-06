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
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TButton *Search;
	TEdit *Edit1;
	TButton *Button1;
	TButton *Button2;
	TPageControl *Tab;
	TTabSheet *Page1;
	TTabSheet *Page2;
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};




class Note : public TPanel
{
	public:
	_fastcall Note(Classes::TComponent* Owner) : TPanel(Owner)
	{
	 TPanel *P;
	 P = new TPanel(Owner);
	};
   private: int x;
};


//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
