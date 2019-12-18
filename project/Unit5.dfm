object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 'Form5'
  ClientHeight = 300
  ClientWidth = 635
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
    Width = 635
    Height = 300
    Align = alClient
    Color = clWhite
    ParentBackground = False
    TabOrder = 0
    ExplicitLeft = 256
    ExplicitTop = 96
    ExplicitWidth = 185
    ExplicitHeight = 41
    DesignSize = (
      635
      300)
    object ListView1: TListView
      Left = 130
      Top = 32
      Width = 375
      Height = 224
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
      TabOrder = 0
      ViewStyle = vsReport
    end
  end
end
