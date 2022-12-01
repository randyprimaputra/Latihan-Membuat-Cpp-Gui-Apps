//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HelloWorld.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
String str = "My First Program Hello World in Cpp Builder 10.4" ;
Memo1 -> Lines -> Add(str);
}
//---------------------------------------------------------------------------
