object qt2: Tqt2
  Left = 0
  Top = 0
  Caption = 'Quest'#227'o 2'
  ClientHeight = 41
  ClientWidth = 297
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 9
    Width = 140
    Height = 16
    Caption = 'Qual o n'#250'mero m'#225'ximo?'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 154
    Top = 8
    Width = 49
    Height = 21
    TabOrder = 0
  end
  object Button1: TButton
    Left = 216
    Top = 8
    Width = 66
    Height = 21
    Caption = 'Ok'
    TabOrder = 1
    OnClick = Button1Click
  end
end
