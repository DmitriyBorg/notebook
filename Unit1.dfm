object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 554
  ClientWidth = 882
  Color = clRed
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
    Width = 882
    Height = 554
    Align = alClient
    Color = clWhite
    ParentBackground = False
    TabOrder = 0
    ExplicitLeft = 8
    object Panel2: TPanel
      Left = 1
      Top = 1
      Width = 880
      Height = 41
      Align = alTop
      Color = clSkyBlue
      ParentBackground = False
      TabOrder = 0
      ExplicitLeft = 2
      ExplicitTop = 0
      DesignSize = (
        880
        41)
      object Edit1: TEdit
        Left = 547
        Top = 11
        Width = 129
        Height = 21
        Anchors = [akTop, akRight, akBottom]
        TabOrder = 0
        Text = #1048#1089#1082#1072#1090#1100' '#1074' '#1079#1072#1084#1077#1090#1082#1072#1093
        OnClick = Edit1Click
        ExplicitLeft = 556
      end
      object Search: TButton
        Left = 682
        Top = 9
        Width = 75
        Height = 25
        Anchors = [akTop, akRight, akBottom]
        Caption = #1053#1072#1081#1090#1080
        TabOrder = 1
        ExplicitLeft = 691
      end
    end
    object AddNote: TButton
      Left = 32
      Top = 96
      Width = 114
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1090#1100
      TabOrder = 1
      OnClick = AddNoteClick
    end
    object DeleteNote: TButton
      Left = 32
      Top = 158
      Width = 114
      Height = 25
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 2
      OnClick = DeleteNoteClick
    end
    object Clear: TButton
      Left = 29
      Top = 349
      Width = 117
      Height = 25
      Caption = #1054#1095#1080#1089#1090#1080#1090#1100
      TabOrder = 3
      OnClick = ClearClick
    end
    object ChooseNote: TButton
      Left = 29
      Top = 318
      Width = 117
      Height = 25
      Caption = #1042#1099#1073#1088#1072#1090#1100
      TabOrder = 4
      OnClick = ChooseNoteClick
    end
    object SortNotes: TButton
      Left = 32
      Top = 127
      Width = 114
      Height = 25
      Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1072#1090#1100
      TabOrder = 5
    end
    object ListView1: TListView
      Left = 184
      Top = 96
      Width = 641
      Height = 393
      Columns = <
        item
          AutoSize = True
          MaxWidth = 500
        end
        item
          AutoSize = True
          Caption = #1074#1086#1079#1088#1072#1089#1090
          MaxWidth = 500
        end
        item
          AutoSize = True
          Caption = #1075#1086#1076' '#1088#1086#1078#1076#1077#1085#1080#1103
          MaxWidth = 500
        end
        item
          AutoSize = True
          Caption = #1087#1086#1087#1091#1083#1080#1103#1094#1080#1103
          MaxWidth = 500
        end>
      ColumnClick = False
      GridLines = True
      Items.ItemData = {
        05EB0000000400000000000000FFFFFFFFFFFFFFFF02000000FFFFFFFF000000
        0006470442043E042D0042043E0406730064006100660064007300588B270610
        470442043E042D0042043E0420003D043E0432043E043504200033043E043404
        6089270600000000FFFFFFFFFFFFFFFF01000000FFFFFFFF0000000006470442
        043E042D0042043E0405610061006100610061003885270600000000FFFFFFFF
        FFFFFFFF00000000FFFFFFFF000000000978006E006A0042043E042000320033
        00320000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF00000000074B043204
        33044004300448044904FFFFFFFFFFFF}
      TabOrder = 6
      ViewStyle = vsReport
    end
  end
end
