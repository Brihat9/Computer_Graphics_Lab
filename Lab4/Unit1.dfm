object Form1: TForm1
  Left = 192
  Top = 125
  Width = 928
  Height = 480
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Edit1: TEdit
    Left = 8
    Top = 8
    Width = 41
    Height = 21
    TabOrder = 0
    Text = 'rx'
  end
  object Edit2: TEdit
    Left = 72
    Top = 8
    Width = 41
    Height = 21
    TabOrder = 1
    Text = 'ry'
  end
  object Edit3: TEdit
    Left = 8
    Top = 32
    Width = 49
    Height = 21
    TabOrder = 2
    Text = 'xo'
  end
  object Edit4: TEdit
    Left = 64
    Top = 32
    Width = 49
    Height = 21
    TabOrder = 3
    Text = 'yo'
  end
  object Button1: TButton
    Left = 8
    Top = 64
    Width = 105
    Height = 25
    Caption = 'Ellipse'
    TabOrder = 4
    OnClick = Button1Click
  end
end
