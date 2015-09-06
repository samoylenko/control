object dmC: TdmC
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  Left = 224
  Top = 219
  Height = 480
  Width = 696
  object tblAsk: TADOTable
    Connection = AskConnection
    CursorType = ctStatic
    LockType = ltReadOnly
    AfterScroll = tblAskAfterScroll
    IndexFieldNames = 'LABNAME;ID'
    TableName = 'ASM'
    Left = 24
    Top = 56
    object tblAskID: TIntegerField
      FieldName = 'ID'
    end
    object tblAskLABNAME: TWideStringField
      FieldName = 'LABNAME'
      Size = 50
    end
    object tblAskQUESTION: TMemoField
      FieldName = 'QUESTION'
      BlobType = ftMemo
    end
    object tblAskANSWER1: TWideStringField
      FieldName = 'ANSWER1'
      Size = 50
    end
    object tblAskANSWER2: TWideStringField
      FieldName = 'ANSWER2'
      Size = 50
    end
    object tblAskANSWER3: TWideStringField
      FieldName = 'ANSWER3'
      Size = 50
    end
    object tblAskANSWER4: TWideStringField
      FieldName = 'ANSWER4'
      Size = 50
    end
    object tblAskANSWER5: TWideStringField
      FieldName = 'ANSWER5'
      Size = 50
    end
    object tblAskRIGHT: TIntegerField
      FieldName = 'RIGHT'
    end
  end
  object dsAsk: TDataSource
    DataSet = tblAsk
    Left = 80
    Top = 56
  end
  object AskQuery: TADOQuery
    Connection = AskConnection
    CursorType = ctStatic
    Parameters = <
      item
        Name = 'LABNAME'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = #1087#1077#1088#1074#1072#1103
      end>
    SQL.Strings = (
      'select * from'
      'ASM'
      'where LABNAME = :LABNAME'
      'order by ID asc')
    Left = 136
    Top = 56
    object AskQueryID: TAutoIncField
      FieldName = 'ID'
    end
    object AskQueryLABNAME: TWideStringField
      FieldName = 'LABNAME'
      Size = 50
    end
    object AskQueryQUESTION: TMemoField
      FieldName = 'QUESTION'
      BlobType = ftMemo
    end
    object AskQueryANSWER1: TWideStringField
      FieldName = 'ANSWER1'
      Size = 50
    end
    object AskQueryANSWER2: TWideStringField
      FieldName = 'ANSWER2'
      Size = 50
    end
    object AskQueryANSWER3: TWideStringField
      FieldName = 'ANSWER3'
      Size = 50
    end
    object AskQueryANSWER4: TWideStringField
      FieldName = 'ANSWER4'
      Size = 50
    end
    object AskQueryANSWER5: TWideStringField
      FieldName = 'ANSWER5'
      Size = 50
    end
    object AskQueryRIGHT: TIntegerField
      FieldName = 'RIGHT'
    end
  end
  object AskConnection: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Password="";User ID=Admin;Data ' +
      'Source=ask.mdb;Mode=Share Deny None;Extended Properties="";Jet O' +
      'LEDB:System database="";Jet OLEDB:Registry Path="";Jet OLEDB:Dat' +
      'abase Password="";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Loc' +
      'king Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global' +
      ' Bulk Transactions=1;Jet OLEDB:New Database Password="";Jet OLED' +
      'B:Create System Database=False;Jet OLEDB:Encrypt Database=False;' +
      'Jet OLEDB:Don'#39't Copy Locale on Compact=False;Jet OLEDB:Compact W' +
      'ithout Replica Repair=False;Jet OLEDB:SFP=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 24
    Top = 8
  end
  object tblTD: TADOTable
    Active = True
    Connection = AskConnection
    CursorType = ctStatic
    LockType = ltReadOnly
    IndexFieldNames = 'ID'
    TableName = 'TABLEDATA'
    Left = 24
    Top = 104
    object tblTDID: TAutoIncField
      FieldName = 'ID'
    end
    object tblTDNAME: TWideStringField
      FieldName = 'NAME'
      Size = 50
    end
    object tblTDTABLE_NAME: TWideStringField
      FieldName = 'TABLE_NAME'
      Size = 50
    end
  end
end
