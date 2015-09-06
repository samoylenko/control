object frmResult: TfrmResult
  Left = 285
  Top = 153
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Результат - Контроль Знаний v1.1'
  ClientHeight = 470
  ClientWidth = 423
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
  object Label1: TLabel
    Left = 24
    Top = 11
    Width = 43
    Height = 13
    Caption = 'Студент:'
  end
  object Label2: TLabel
    Left = 12
    Top = 56
    Width = 55
    Height = 13
    Caption = 'Результат:'
  end
  object Label3: TLabel
    Left = 26
    Top = 35
    Width = 41
    Height = 13
    Caption = 'Модуль:'
  end
  object edtName: TEdit
    Left = 72
    Top = 8
    Width = 345
    Height = 21
    ParentColor = True
    ReadOnly = True
    TabOrder = 2
    Text = 'Студент'
  end
  object Result: TMemo
    Left = 72
    Top = 56
    Width = 345
    Height = 377
    Lines.Strings = (
      'Result')
    ParentColor = True
    ReadOnly = True
    ScrollBars = ssBoth
    TabOrder = 4
  end
  object btnExit: TBitBtn
    Left = 328
    Top = 440
    Width = 89
    Height = 25
    Cancel = True
    Caption = 'Закрыть'
    Default = True
    ModalResult = 1
    TabOrder = 0
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000130B0000130B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      3333333333FFFFF3333333333999993333333333F77777FFF333333999999999
      3333333777333777FF3333993333339993333377FF3333377FF3399993333339
      993337777FF3333377F3393999333333993337F777FF333337FF993399933333
      399377F3777FF333377F993339993333399377F33777FF33377F993333999333
      399377F333777FF3377F993333399933399377F3333777FF377F993333339993
      399377FF3333777FF7733993333339993933373FF3333777F7F3399933333399
      99333773FF3333777733339993333339933333773FFFFFF77333333999999999
      3333333777333777333333333999993333333333377777333333}
    NumGlyphs = 2
  end
  object btnSave: TBitBtn
    Left = 232
    Top = 440
    Width = 89
    Height = 25
    Caption = 'Сохранить'
    TabOrder = 1
    OnClick = btnSaveClick
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000130B0000130B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333330070
      7700333333337777777733333333008088003333333377F73377333333330088
      88003333333377FFFF7733333333000000003FFFFFFF77777777000000000000
      000077777777777777770FFFFFFF0FFFFFF07F3333337F3333370FFFFFFF0FFF
      FFF07F3FF3FF7FFFFFF70F00F0080CCC9CC07F773773777777770FFFFFFFF039
      99337F3FFFF3F7F777F30F0000F0F09999937F7777373777777F0FFFFFFFF999
      99997F3FF3FFF77777770F00F000003999337F773777773777F30FFFF0FF0339
      99337F3FF7F3733777F30F08F0F0337999337F7737F73F7777330FFFF0039999
      93337FFFF7737777733300000033333333337777773333333333}
    NumGlyphs = 2
  end
  object edtModule: TEdit
    Left = 72
    Top = 32
    Width = 345
    Height = 21
    ParentColor = True
    ReadOnly = True
    TabOrder = 3
    Text = 'edtModule'
  end
  object SaveD: TSaveDialog
    DefaultExt = 'txt'
    Filter = 'Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 8
    Top = 440
  end
end
