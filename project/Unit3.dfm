﻿object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 321
  ClientWidth = 588
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
    Width = 588
    Height = 321
    Align = alClient
    Color = clWhite
    ParentBackground = False
    TabOrder = 0
    ExplicitLeft = 240
    ExplicitTop = 104
    ExplicitWidth = 185
    ExplicitHeight = 41
    DesignSize = (
      588
      321)
    object Заголовок: TLabel
      Left = 270
      Top = 21
      Width = 53
      Height = 13
      Anchors = [akLeft, akBottom]
      Caption = #1047#1072#1075#1086#1083#1086#1074#1086#1082
    end
    object Текст: TLabel
      Left = 280
      Top = 67
      Width = 29
      Height = 13
      Anchors = [akLeft, akBottom]
      Caption = #1058#1077#1082#1089#1090
    end
    object Name: TEdit
      Left = 240
      Top = 40
      Width = 121
      Height = 21
      Anchors = [akLeft, akBottom]
      TabOrder = 0
      Text = 'Name'
    end
    object Text: TMemo
      Left = 208
      Top = 86
      Width = 185
      Height = 89
      Anchors = [akLeft, akBottom]
      Lines.Strings = (
        'Text')
      TabOrder = 1
    end
    object Button1: TButton
      Left = 240
      Top = 208
      Width = 121
      Height = 25
      Anchors = [akLeft, akBottom]
      Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1079#1072#1084#1077#1090#1082#1091
      TabOrder = 2
      OnClick = Button1Click
    end
  end
end
