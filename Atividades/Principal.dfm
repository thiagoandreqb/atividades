object frmPrincipal: TfrmPrincipal
  Left = 0
  Top = 0
  Caption = 'Atividades'
  ClientHeight = 130
  ClientWidth = 458
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Teste While'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 89
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Teste Struct'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 170
    Top = 8
    Width = 87
    Height = 25
    Caption = 'Teste Fun'#231#227'o'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 263
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Teste Classe'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 344
    Top = 8
    Width = 105
    Height = 25
    Caption = 'Teste Trat. Erros'
    TabOrder = 4
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 8
    Top = 39
    Width = 93
    Height = 25
    Caption = 'Teste Equ. 2'#186
    TabOrder = 5
  end
  object Button7: TButton
    Left = 107
    Top = 39
    Width = 93
    Height = 25
    Caption = 'Teste Calculadora'
    TabOrder = 6
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 206
    Top = 39
    Width = 99
    Height = 25
    Caption = 'Ler Carta e Plot'
    TabOrder = 7
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 311
    Top = 39
    Width = 138
    Height = 25
    Caption = 'Carregar Esta'#231#245'es SISAL'
    TabOrder = 8
  end
  object Button10: TButton
    Left = 8
    Top = 70
    Width = 138
    Height = 25
    Caption = 'Grid de Po'#231'os do SISAL'
    TabOrder = 9
  end
  object Button11: TButton
    Left = 152
    Top = 70
    Width = 297
    Height = 25
    Caption = 'Conex'#227'o com o Servidor SISAL<Caixa de Chocolate>'
    TabOrder = 10
  end
  object Button12: TButton
    Left = 8
    Top = 101
    Width = 138
    Height = 25
    Caption = 'Exerc'#237'cios'
    TabOrder = 11
    OnClick = Button12Click
  end
end
