# automatically generated by the FlatBuffers compiler, do not modify

# namespace: gamma_api

import flatbuffers

class MemoryInfo(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsMemoryInfo(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = MemoryInfo()
        x.Init(buf, n + offset)
        return x

    # MemoryInfo
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # MemoryInfo
    def TableMem(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int64Flags, o + self._tab.Pos)
        return 0

    # MemoryInfo
    def IndexMem(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int64Flags, o + self._tab.Pos)
        return 0

    # MemoryInfo
    def VectorMem(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int64Flags, o + self._tab.Pos)
        return 0

    # MemoryInfo
    def FieldRangeMem(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int64Flags, o + self._tab.Pos)
        return 0

    # MemoryInfo
    def BitmapMem(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(12))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int64Flags, o + self._tab.Pos)
        return 0

def MemoryInfoStart(builder): builder.StartObject(5)
def MemoryInfoAddTableMem(builder, tableMem): builder.PrependInt64Slot(0, tableMem, 0)
def MemoryInfoAddIndexMem(builder, indexMem): builder.PrependInt64Slot(1, indexMem, 0)
def MemoryInfoAddVectorMem(builder, vectorMem): builder.PrependInt64Slot(2, vectorMem, 0)
def MemoryInfoAddFieldRangeMem(builder, fieldRangeMem): builder.PrependInt64Slot(3, fieldRangeMem, 0)
def MemoryInfoAddBitmapMem(builder, bitmapMem): builder.PrependInt64Slot(4, bitmapMem, 0)
def MemoryInfoEnd(builder): return builder.EndObject()