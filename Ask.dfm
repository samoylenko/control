object frmAsk: TfrmAsk
  Left = 313
  Top = 208
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Языки ассемблера - Контроль Знаний v1.1'
  ClientHeight = 360
  ClientWidth = 536
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
    Left = 16
    Top = 11
    Width = 43
    Height = 13
    Caption = 'Студент:'
  end
  object Label2: TLabel
    Left = 7
    Top = 35
    Width = 52
    Height = 13
    Caption = 'Прогресс:'
  end
  object Label3: TLabel
    Left = 283
    Top = 11
    Width = 41
    Height = 13
    Caption = 'Модуль:'
  end
  object edtName: TEdit
    Left = 64
    Top = 8
    Width = 209
    Height = 21
    ParentColor = True
    ReadOnly = True
    TabOrder = 4
    Text = 'Студент'
  end
  object QGroup: TGroupBox
    Left = 8
    Top = 56
    Width = 521
    Height = 265
    Caption = 'Тема: "Название темы" - Вопрос № 1 из 10'
    TabOrder = 0
    object Answer: TRadioGroup
      Left = 8
      Top = 72
      Width = 505
      Height = 185
      Caption = 'Выберите правильный ответ:'
      ItemIndex = 0
      Items.Strings = (
        'Вариант ответа 1'
        'Вариант ответа 2'
        'Вариант ответа 3'
        'Вариант ответа 4'
        'Вариант ответа 5')
      TabOrder = 0
    end
    object DBMemo1: TDBMemo
      Left = 8
      Top = 16
      Width = 505
      Height = 49
      DataField = 'QUESTION'
      DataSource = dmC.dsAsk
      ParentColor = True
      ReadOnly = True
      ScrollBars = ssVertical
      TabOrder = 1
    end
  end
  object btnNext: TBitBtn
    Left = 424
    Top = 328
    Width = 105
    Height = 25
    Caption = 'Дальше'
    Default = True
    TabOrder = 1
    OnClick = btnNextClick
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000120B0000120B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      3333333333333333333333333333333333333333333333333333333333333333
      3333333333333333333333333333333333333333333FF3333333333333003333
      3333333333773FF3333333333309003333333333337F773FF333333333099900
      33333FFFFF7F33773FF30000000999990033777777733333773F099999999999
      99007FFFFFFF33333F7700000009999900337777777F333F7733333333099900
      33333333337F3F77333333333309003333333333337F77333333333333003333
      3333333333773333333333333333333333333333333333333333333333333333
      3333333333333333333333333333333333333333333333333333}
    NumGlyphs = 2
  end
  object btnPrev: TBitBtn
    Left = 312
    Top = 328
    Width = 105
    Height = 25
    Caption = 'Назад'
    TabOrder = 2
    OnClick = btnPrevClick
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000120B0000120B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      3333333333333333333333333333333333333333333333333333333333333333
      3333333333333FF3333333333333003333333333333F77F33333333333009033
      333333333F7737F333333333009990333333333F773337FFFFFF330099999000
      00003F773333377777770099999999999990773FF33333FFFFF7330099999000
      000033773FF33777777733330099903333333333773FF7F33333333333009033
      33333333337737F3333333333333003333333333333377333333333333333333
      3333333333333333333333333333333333333333333333333333333333333333
      3333333333333333333333333333333333333333333333333333}
    NumGlyphs = 2
  end
  object btnQuit: TBitBtn
    Left = 200
    Top = 328
    Width = 105
    Height = 25
    Cancel = True
    Caption = 'Отмена'
    ModalResult = 2
    TabOrder = 3
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
  object ProgressBar1: TProgressBar
    Left = 64
    Top = 32
    Width = 465
    Height = 21
    Min = 0
    Max = 100
    Step = 1
    TabOrder = 6
  end
  object edtModule: TEdit
    Left = 328
    Top = 8
    Width = 201
    Height = 21
    ParentColor = True
    ReadOnly = True
    TabOrder = 5
    Text = 'edtModule'
  end
end
