﻿object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
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
    object Label1: TLabel
      Left = 265
      Top = 16
      Width = 136
      Height = 13
      Alignment = taCenter
      Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1079#1072#1084#1077#1090#1082#1080
    end
    object Label2: TLabel
      Left = 443
      Top = 64
      Width = 134
      Height = 13
      Alignment = taCenter
      Caption = #1057#1086#1079#1076#1072#1085#1080#1077' '#1085#1072#1087#1086#1084#1080#1085#1072#1085#1080#1103
    end
    object Заголовок: TEdit
      Left = 121
      Top = 61
      Width = 136
      Height = 21
      Alignment = taCenter
      TabOrder = 0
      Text = #1047#1072#1075#1086#1083#1086#1074#1086#1082
      OnClick = ЗаголовокClick
    end
    object AddNote: TButton
      Left = 265
      Top = 224
      Width = 136
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1079#1072#1084#1077#1090#1082#1091
      TabOrder = 1
      OnClick = AddNoteClick
    end
    object Текст: TMemo
      Left = 97
      Top = 107
      Width = 185
      Height = 89
      Lines.Strings = (
        #1058#1077#1082#1089#1090)
      TabOrder = 2
      OnClick = ТекстClick
    end
    object DateTimePicker1: TDateTimePicker
      Left = 408
      Top = 88
      Width = 186
      Height = 21
      Date = 43809.613784722220000000
      Time = 43809.613784722220000000
      TabOrder = 3
    end
    object DateTimePicker2: TDateTimePicker
      Left = 408
      Top = 128
      Width = 186
      Height = 21
      Date = 43809.621776226850000000
      Time = 43809.621776226850000000
      Kind = dtkTime
      TabOrder = 4
    end
    object AddReminder: TButton
      Left = 443
      Top = 155
      Width = 134
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1085#1072#1087#1086#1084#1080#1085#1072#1085#1080#1077
      TabOrder = 5
    end
  end
end
