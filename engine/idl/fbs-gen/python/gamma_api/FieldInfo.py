# automatically generated by the FlatBuffers compiler, do not modify

# namespace: gamma_api

import flatbuffers

class FieldInfo(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsFieldInfo(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = FieldInfo()
        x.Init(buf, n + offset)
        return x

    # FieldInfo
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # FieldInfo
    def Name(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

    # FieldInfo
    def DataType(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

    # FieldInfo
    def IsIndex(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return bool(self._tab.Get(flatbuffers.number_types.BoolFlags, o + self._tab.Pos))
        return False

def FieldInfoStart(builder): builder.StartObject(3)
def FieldInfoAddName(builder, name): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(name), 0)
def FieldInfoAddDataType(builder, dataType): builder.PrependInt8Slot(1, dataType, 0)
def FieldInfoAddIsIndex(builder, isIndex): builder.PrependBoolSlot(2, isIndex, 0)
def FieldInfoEnd(builder): return builder.EndObject()
