//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
        int x1 = StrToInt(Form1->Edit1->Text);
        int y1 = StrToInt(Form1->Edit2->Text);
        int x2 = StrToInt(Form1->Edit3->Text);
        int y2 = StrToInt(Form1->Edit4->Text);

        float dx=x2-x1;
        float dy=y2-y1;

        int xinc,yinc;

        if(x2>x1)
                xinc=1;
        else
                xinc=-1;

        if(y2>y1)
                yinc=1;
        else
                yinc=-1;

        int po;
        int x=x1,y=y1;
        if(abs(dx)>abs(dy))
        {
               po = 2*dy-dx;
               for(int i = 0;i<dx;i++)
               {
                        Canvas->Pixels[x][y] = clBlue;
                        if(po<0)
                        {
                                x=x+xinc;
                                y=y;
                                po=po+2*dy;
                        }
                        else
                        {
                                x=x+xinc;
                                y=y+yinc;
                                po=po+2*(dy-dx);
                        }
               }
        }
        else
        {
               po = 2*dx-dy;
               for(int i = 0;i<dy;i++)
               {
                        Canvas->Pixels[x][y] = clBlue;
                        if(po<0)
                        {
                                x=x;
                                y=y+yinc;
                                po=po+2*dx;
                        }
                        else
                        {
                                x=x+xinc;
                                y=y+yinc;
                                po=po+2*(dx-dy);
                        }
               }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        int x1 = StrToInt(Form1->Edit1->Text);
        int y1 = StrToInt(Form1->Edit2->Text);
        int x2 = StrToInt(Form1->Edit3->Text);
        int y2 = StrToInt(Form1->Edit4->Text);

        Canvas->MoveTo(x1,y1);
        Canvas->LineTo(x2,y2);
}
//---------------------------------------------------------------------------
