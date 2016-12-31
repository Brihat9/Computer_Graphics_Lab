//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include<math.h>
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
        int x1=StrToInt(Form1->Edit1->Text);
        int y1=StrToInt(Form1->Edit2->Text);
        int x2=StrToInt(Form1->Edit3->Text);
        int y2=StrToInt(Form1->Edit4->Text);

        int dx = x2-x1;
        int dy = y2-y1;

        float step;
        if(abs(dx)>abs(dy))
                step=abs(dx);
        else
                step=abs(dy);

        float xinc=dx/step;
        float yinc=dy/step;

        int k = 0;
        float x=x1,y=y1;
        do{
                Form1->Canvas->Pixels[x][y] = clRed;
                x = x+xinc;
                y = y+yinc;
                k++;
        }while(k<=step);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
        int x1=StrToInt(Form1->Edit1->Text);
        int y1=StrToInt(Form1->Edit2->Text);
        int x2=StrToInt(Form1->Edit3->Text);
        int y2=StrToInt(Form1->Edit4->Text);

        Canvas->MoveTo(x1,y1);
        Canvas->LineTo(x2,y2);
}
//---------------------------------------------------------------------------

