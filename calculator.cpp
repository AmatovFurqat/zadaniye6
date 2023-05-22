//---------------------------------------------------------------------------


#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "calculator.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
String s1,s2;
char c;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button22Click(TObject *Sender)
{
 Edit1->Text=Edit1->Text+"7";

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button17Click(TObject *Sender)
{
 Edit1->Text=Edit1->Text+"8";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button11Click(TObject *Sender)
{
 Edit1->Text=Edit1->Text+"9";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button23Click(TObject *Sender)
{
 Edit1->Text=Edit1->Text+"4";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button18Click(TObject *Sender)
{
 Edit1->Text=Edit1->Text+"5";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button12Click(TObject *Sender)
{
 Edit1->Text=Edit1->Text+"6";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button24Click(TObject *Sender)
{
 Edit1->Text=Edit1->Text+"1";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button19Click(TObject *Sender)
{
 Edit1->Text=Edit1->Text+"2";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button13Click(TObject *Sender)
{
 Edit1->Text=Edit1->Text+"3";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button20Click(TObject *Sender)
{
 Edit1->Text=Edit1->Text+"0";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
 Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button10Click(TObject *Sender)
{
s1=Edit1->Text;
c='+';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
s1=Edit1->Text;
c='-';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
s1=Edit1->Text;
c='*';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
s1=Edit1->Text;
c='/';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button9Click(TObject *Sender)
{
s2=Edit1->Text;
double a,b,rez;
a=StrToFloat(s1);
b=StrToFloat(s2);
if(c=='+')
rez=a+b; else
if(c=='-')
rez=a-b; else
if(c=='*')
rez=a*b; else
if(c=='/')
rez=a/b;
Edit1->Text= FloatToStr(rez);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
 double a,rez;
 a=StrToFloat(Edit1->Text);
 rez=sqrt(a);
 Edit1->Text=FloatToStr(rez);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 double a,rez;
 a=StrToFloat(Edit1->Text);
 rez=a*10/100;
 Edit1->Text=FloatToStr(rez);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button21Click(TObject *Sender)
{
 double a,rez;
 a=StrToFloat(Edit1->Text);
 rez=1/a;
 Edit1->Text=FloatToStr(rez);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button16Click(TObject *Sender)
{
 double a,rez;
 a=StrToFloat(Edit1->Text);
 rez=a*a;
 Edit1->Text=FloatToStr(rez);
}
//---------------------------------------------------------------------------
