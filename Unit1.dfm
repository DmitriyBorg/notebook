object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 532
  ClientWidth = 868
  Color = clWhite
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
    Width = 868
    Height = 532
    Align = alClient
    Color = clWhite
    ParentBackground = False
    TabOrder = 0
    ExplicitWidth = 882
    ExplicitHeight = 554
    DesignSize = (
      868
      532)
    object Panel2: TPanel
      Left = 1
      Top = 1
      Width = 866
      Height = 41
      Align = alTop
      Color = clSkyBlue
      ParentBackground = False
      TabOrder = 0
      ExplicitLeft = 0
      ExplicitTop = 0
      ExplicitWidth = 880
      DesignSize = (
        866
        41)
      object Edit1: TEdit
        Left = 533
        Top = 11
        Width = 129
        Height = 21
        Anchors = [akTop, akRight, akBottom]
        TabOrder = 0
        Text = #1048#1089#1082#1072#1090#1100' '#1074' '#1079#1072#1084#1077#1090#1082#1072#1093
        OnClick = Edit1Click
        ExplicitLeft = 547
      end
      object Search: TButton
        Left = 668
        Top = 9
        Width = 75
        Height = 25
        Anchors = [akTop, akRight, akBottom]
        Caption = #1053#1072#1081#1090#1080
        TabOrder = 1
        ExplicitLeft = 682
      end
    end
    object AddNote: TButton
      Left = 35
      Top = 74
      Width = 114
      Height = 25
      Anchors = [akLeft, akBottom]
      Caption = #1044#1086#1073#1072#1074#1090#1100
      TabOrder = 1
      OnClick = AddNoteClick
      ExplicitTop = 96
    end
    object DeleteNote: TButton
      Left = 35
      Top = 105
      Width = 114
      Height = 25
      Anchors = [akLeft, akBottom]
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 2
      OnClick = DeleteNoteClick
      ExplicitTop = 127
    end
    object Clear: TButton
      Left = 32
      Top = 442
      Width = 117
      Height = 25
      Anchors = [akLeft, akBottom]
      Caption = #1054#1095#1080#1089#1090#1080#1090#1100
      TabOrder = 3
      OnClick = ClearClick
      ExplicitTop = 464
    end
    object ChooseNote: TButton
      Left = 32
      Top = 411
      Width = 117
      Height = 25
      Anchors = [akLeft, akBottom]
      Caption = #1042#1099#1073#1088#1072#1090#1100
      TabOrder = 4
      OnClick = ChooseNoteClick
      ExplicitTop = 433
    end
    object SortNotes: TButton
      Left = 35
      Top = 136
      Width = 114
      Height = 25
      Anchors = [akLeft, akBottom]
      Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1072#1090#1100
      TabOrder = 5
      ExplicitTop = 158
    end
    object ListView1: TListView
      Left = 184
      Top = 96
      Width = 641
      Height = 371
      Anchors = [akLeft, akTop, akBottom]
      Columns = <
        item
          AutoSize = True
          Caption = #1048#1084#1103
          MaxWidth = 500
        end
        item
          AutoSize = True
          Caption = #1058#1077#1082#1089#1090' '#1079#1072#1084#1077#1090#1082#1080
          MaxWidth = 500
        end>
      ColumnClick = False
      GridLines = True
      TabOrder = 6
      ViewStyle = vsReport
      OnSelectItem = ListView1SelectItem
      ExplicitHeight = 393
    end
    object load: TButton
      Left = 548
      Top = 482
      Width = 119
      Height = 25
      Anchors = [akLeft, akBottom]
      Caption = #1047#1072#1075#1088#1091#1079#1072#1080#1090#1100' '#1076#1072#1085#1085#1099#1077
      TabOrder = 7
      OnClick = loadClick
      ExplicitTop = 504
    end
    object save: TButton
      Left = 683
      Top = 482
      Width = 126
      Height = 25
      Anchors = [akLeft, akBottom]
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1076#1072#1085#1085#1099#1077
      TabOrder = 8
      OnClick = saveClick
      ExplicitTop = 504
    end
  end
end
