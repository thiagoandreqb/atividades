object frmLerCartaPlotar: TfrmLerCartaPlotar
  Left = 0
  Top = 0
  Caption = 'Ler carta e plotar'
  ClientHeight = 461
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnCreate = FormCreate
  OnKeyDown = FormKeyDown
  OnShow = FormShow
  DesignSize = (
    635
    461)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 440
    Width = 3
    Height = 13
  end
  object pgcPrincipal: TAdvPageControl
    Left = 8
    Top = 8
    Width = 619
    Height = 105
    ActivePage = tbsBD
    ActiveFont.Charset = DEFAULT_CHARSET
    ActiveFont.Color = clWindowText
    ActiveFont.Height = -11
    ActiveFont.Name = 'Tahoma'
    ActiveFont.Style = []
    TabBackGroundColor = clBtnFace
    TabMargin.RightMargin = 0
    TabOverlap = 0
    Version = '2.0.0.4'
    PersistPagesState.Location = plRegistry
    PersistPagesState.Enabled = False
    TabOrder = 0
    OnChanging = pgcPrincipalChanging
    object tbsBD: TAdvTabSheet
      Caption = 'Carta BD'
      Color = clBtnFace
      ColorTo = clNone
      TabColor = clBtnFace
      TabColorTo = clNone
      object edtBD: TEdit
        Left = 3
        Top = 16
        Width = 446
        Height = 21
        TabOrder = 0
      end
      object btnPlotarBD: TButton
        Left = 533
        Top = 14
        Width = 75
        Height = 25
        Caption = 'Plotar'
        TabOrder = 1
        OnClick = btnPlotarBDClick
      end
      object btnCarregarBD: TButton
        Left = 454
        Top = 14
        Width = 75
        Height = 25
        Caption = 'Carregar'
        TabOrder = 2
        OnClick = btnCarregarBDClick
      end
    end
    object tbsDYN: TAdvTabSheet
      Caption = 'Carta DYN'
      Color = clBtnFace
      ColorTo = clNone
      TabColor = clBtnFace
      TabColorTo = clNone
      object edtDYN: TEdit
        Left = 3
        Top = 16
        Width = 446
        Height = 21
        TabOrder = 0
      end
      object btnPlotarDYN: TButton
        Left = 533
        Top = 14
        Width = 75
        Height = 25
        Caption = 'Plotar'
        TabOrder = 1
        OnClick = btnPlotarDYNClick
      end
      object btnCarregarDYN: TButton
        Left = 454
        Top = 14
        Width = 75
        Height = 25
        Caption = 'Carregar'
        TabOrder = 2
        OnClick = btnCarregarDYNClick
      end
    end
  end
  object Grid: TStringGrid
    Left = 8
    Top = 144
    Width = 151
    Height = 289
    ColCount = 2
    FixedCols = 0
    RowCount = 12
    FixedRows = 0
    TabOrder = 1
  end
  object Chart1: TChart
    Left = 176
    Top = 144
    Width = 451
    Height = 289
    AllowPanning = pmNone
    Legend.Visible = False
    Title.Text.Strings = (
      'Carta dinamometrica')
    View3D = False
    BevelOuter = bvNone
    TabOrder = 2
    Anchors = [akLeft, akTop, akRight, akBottom]
    DefaultCanvas = 'TGDIPlusCanvas'
    PrintMargins = (
      15
      18
      15
      18)
    ColorPaletteIndex = 13
    object Series1: TLineSeries
      Brush.BackColor = clDefault
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      XValues.Name = 'X'
      XValues.Order = loNone
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
  end
  object opdCarta: TOpenTextFileDialog
    Options = [ofReadOnly, ofEnableSizing]
    Left = 564
    Top = 80
  end
  object ADOQuery1: TADOQuery
    ConnectionString = 
      'Provider=MSDASQL.1;Password=scada2005;Persist Security Info=True' +
      ';User ID=postgres;Data Source=PostgreSQLStatic'
    Parameters = <>
    Left = 492
    Top = 80
  end
  object ADOConnection1: TADOConnection
    ConnectionString = 
      'Provider=MSDASQL.1;Password=scada2005;Persist Security Info=True' +
      ';User ID=postgres;Data Source=PostgreSQLStatic'
    LoginPrompt = False
    Provider = 'MSDASQL.1'
    Left = 424
    Top = 80
  end
end
