# automatically generated by the FlatBuffers compiler, do not modify

# namespace: gamma_api

import flatbuffers

class TermFilter(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsTermFilter(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = TermFilter()
        x.Init(buf, n + offset)
        return x

    # TermFilter
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # TermFilter
    def Field(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

    # TermFilter
    def Value(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.Get(flatbuffers.number_types.Uint8Flags, a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 1))
        return 0

    # TermFilter
    def ValueAsNumpy(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.GetVectorAsNumpy(flatbuffers.number_types.Uint8Flags, o)
        return 0

    # TermFilter
    def ValueLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # TermFilter
    def IsUnion(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int32Flags, o + self._tab.Pos)
        return 0

def TermFilterStart(builder): builder.StartObject(3)
def TermFilterAddField(builder, field): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(field), 0)
def TermFilterAddValue(builder, value): builder.PrependUOffsetTRelativeSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(value), 0)
def TermFilterStartValueVector(builder, numElems): return builder.StartVector(1, numElems, 1)
def TermFilterAddIsUnion(builder, isUnion): builder.PrependInt32Slot(2, isUnion, 0)
def TermFilterEnd(builder): return builder.EndObject()
