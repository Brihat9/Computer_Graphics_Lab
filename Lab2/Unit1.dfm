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
    Text = 'x1'
  end
  object Edit2: TEdit
    Left = 64
    Top = 8
    Width = 41
    Height = 21
    TabOrder = 1
    Text = 'y1'
  end
  object Edit3: TEdit
    Left = 8
    Top = 40
    Width = 41
    Height = 21
    TabOrder = 2
    Text = 'x2'
  end
  object Edit4: TEdit
    Left = 64
    Top = 40
    Width = 41
    Height = 21
    TabOrder = 3
    Text = 'y2'
  end
  object Button1: TButton
    Left = 8
    Top = 72
    Width = 97
    Height = 25
    Caption = 'BLA'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 104
    Width = 97
    Height = 25
    Caption = 'Default'
    TabOrder = 5
    OnClick = Button2Click
  end
end
