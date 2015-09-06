object frmAbout: TfrmAbout
  Left = 333
  Top = 289
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'О программе'
  ClientHeight = 138
  ClientWidth = 178
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 161
    Height = 89
    Lines.Strings = (
      'Контроль знаний v2.0'
      ''
      '2002 (C) Михаил Самойленко'
      '2002 (С) Евгений Фоминов'
      ''
      'http://powermike.narod.ru'
      'demo')
    ParentColor = True
    ReadOnly = True
    TabOrder = 1
  end
  object Button1: TButton
    Left = 8
    Top = 104
    Width = 161
    Height = 25
    Cancel = True
    Caption = 'Закрыть'
    Default = True
    ModalResult = 1
    TabOrder = 0
  end
end
