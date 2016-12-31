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
       int radius = StrToInt(Form1->Edit1->Text);
        int xc = StrToInt(Form1->Edit2->Text);
        int yc = StrToInt(Form1->Edit3->Text);

        int xo = 0;
        int yo = radius;

        int po = 1-radius;

        do{
                Form1->Canvas->Pixels[xc + xo][yc + yo] = clRed;
                Form1->Canvas->Pixels[xc + xo][yc - yo] = clRed;
                Form1->Canvas->Pixels[xc - xo][yc + yo] = clRed;
                Form1->Canvas->Pixels[xc - xo][yc - yo] = clRed;
                Form1->Canvas->Pixels[xc + yo][yc + xo] = clRed;
                Form1->Canvas->Pixels[xc + yo][yc - xo] = clRed;
                Form1->Canvas->Pixels[xc - yo][yc + xo] = clRed;
                Form1->Canvas->Pixels[xc - yo][yc - xo] = clRed;

                if(po < 0)
                {
                        xo = xo + 1;
                        yo = yo;
                        po = po + 2 * xo + 1;
                }
                else
                {
                        xo = xo + 1;
                        yo = yo - 1;
                        po = po + 2 * xo - 2 * yo + 1;
                }
        }while(xo<=yo);

}
//---------------------------------------------------------------------------
 