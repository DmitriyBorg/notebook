object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 457
  ClientWidth = 891
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
    Width = 891
    Height = 457
    Align = alClient
    Color = clWhite
    ParentBackground = False
    TabOrder = 0
    ExplicitTop = 8
    ExplicitWidth = 888
    ExplicitHeight = 453
    DesignSize = (
      891
      457)
    object Panel2: TPanel
      Left = 1
      Top = 1
      Width = 889
      Height = 41
      Align = alTop
      Color = clSkyBlue
      ParentBackground = False
      TabOrder = 0
      ExplicitWidth = 886
      DesignSize = (
        889
        41)
      object Edit1: TEdit
        Left = 556
        Top = 11
        Width = 129
        Height = 21
        Anchors = [akTop, akRight, akBottom]
        TabOrder = 0
        Text = #1048#1089#1082#1072#1090#1100' '#1074' '#1079#1072#1084#1077#1090#1082#1072#1093
        OnClick = Edit1Click
        ExplicitLeft = 553
      end
      object Search: TButton
        Left = 691
        Top = 9
        Width = 75
        Height = 25
        Anchors = [akTop, akRight, akBottom]
        Caption = #1053#1072#1081#1090#1080
        TabOrder = 1
        ExplicitLeft = 688
      end
    end
    object Button1: TButton
      Left = 656
      Top = 422
      Width = 114
      Height = 25
      Anchors = [akRight, akBottom]
      Caption = #1044#1086#1073#1072#1074#1090#1100
      TabOrder = 1
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 776
      Top = 422
      Width = 105
      Height = 25
      Anchors = [akRight, akBottom]
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 2
      OnClick = Button2Click
    end
    object PageControl1: TPageControl
      Left = 200
      Top = 48
      Width = 681
      Height = 368
      ActivePage = TabSheet1
      Anchors = [akLeft, akTop, akRight, akBottom]
      TabOrder = 3
      object TabSheet1: TTabSheet
        Caption = 'TabSheet1'
        ExplicitLeft = 0
        ExplicitTop = 28
        object ScrollBox1: TScrollBox
          Left = 0
          Top = 0
          Width = 673
          Height = 340
          Align = alClient
          TabOrder = 0
          ExplicitTop = 4
        end
      end
    end
  end
end
