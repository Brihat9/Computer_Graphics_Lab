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
    int rx = StrToInt(Form1->Edit1->Text);
    int ry = StrToInt(Form1->Edit2->Text);
    int xc = StrToInt(Form1->Edit3->Text);
    int yc = StrToInt(Form1->Edit4->Text);

    float xo = 0;
    float yo = ry;

    float po = 0.25 * pow(rx,2) + pow(ry,2) - pow(rx,2) * ry;
    do{
        Form1->Canvas->Pixels[xc + xo][yc + yo] = clBlue;
        Form1->Canvas->Pixels[xc + xo][yc - yo] = clBlue;
        Form1->Canvas->Pixels[xc - xo][yc + yo] = clBlue;
        Form1->Canvas->Pixels[xc - xo][yc - yo] = clBlue;

        if(po < 0)
        {
            xo = xo + 1;
            yo = yo;
            po = po + 2 * pow(ry,2) * xo + pow(ry,2);
        }
        else
        {
            xo = xo + 1;
            yo = yo - 1;
            po = po + 2 * pow(ry,2) * xo + pow(ry,2) - 2 * pow(rx,2) * yo;
        }
    }while((2 * xo * pow(ry,2)) < (2 * yo * pow(rx,2)));

    po = pow((ry * (xo + 0.5)),2) + pow((rx * (yo - 1)),2) - pow((rx * ry),2);
    do{
        Form1->Canvas->Pixels[xc + xo][yc + yo] = clBlue;
        Form1->Canvas->Pixels[xc + xo][yc - yo] = clBlue;
        Form1->Canvas->Pixels[xc - xo][yc + yo] = clBlue;
        Form1->Canvas->Pixels[xc - xo][yc - yo] = clBlue;

        if(po < 0)
        {
            xo = xo + 1;
            yo = yo - 1;
            po = po + 2 * pow(ry,2) * xo - 2 * pow(rx,2) * yo + pow(rx,2);
        }
        else
        {
            xo = xo;
            yo = yo - 1;
            po = po - 2 * yo * pow(rx,2) + pow(rx,2);
        }
    }while(yo>=0);
}
//---------------------------------------------------------------------------
