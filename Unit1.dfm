object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 453
  ClientWidth = 888
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 888
    Height = 453
    Align = alClient
    Color = clWhite
    ParentBackground = False
    TabOrder = 0
    object Panel2: TPanel
      Left = 1
      Top = 1
      Width = 886
      Height = 41
      Align = alTop
      Color = clSkyBlue
      ParentBackground = False
      TabOrder = 0
      DesignSize = (
        886
        41)
      object Edit1: TEdit
        Left = 553
        Top = 11
        Width = 129
        Height = 21
        Anchors = [akTop, akRight, akBottom]
        TabOrder = 0
        Text = #1048#1089#1082#1072#1090#1100' '#1074' '#1079#1072#1084#1077#1090#1082#1072#1093
        OnClick = Edit1Click
      end
      object Search: TButton
        Left = 688
        Top = 9
        Width = 75
        Height = 25
        Anchors = [akTop, akRight, akBottom]
        Caption = #1053#1072#1081#1090#1080
        TabOrder = 1
      end
    end
    object Button1: TButton
      Left = 656
      Top = 422
      Width = 114
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1090#1100
      TabOrder = 1
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 776
      Top = 422
      Width = 105
      Height = 25
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 2
      OnClick = Button2Click
    end
    object Tab: TPageControl
      Left = 168
      Top = 48
      Width = 713
      Height = 368
      ActivePage = Page1
      TabOrder = 3
      object Page1: TTabSheet
        Caption = 'Page1'
      end
      object Page2: TTabSheet
        Caption = 'Page2'
        ImageIndex = 1
        ExplicitLeft = 0
        ExplicitTop = 0
        ExplicitWidth = 0
        ExplicitHeight = 0
      end
    end
  end
end
