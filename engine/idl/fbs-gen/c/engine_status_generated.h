// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ENGINESTATUS_GAMMA_API_H_
#define FLATBUFFERS_GENERATED_ENGINESTATUS_GAMMA_API_H_

#include "flatbuffers/flatbuffers.h"

namespace gamma_api {

struct EngineStatus;

struct EngineStatus FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_INDEX_STATUS = 4,
    VT_TABLE_MEM = 6,
    VT_INDEX_MEM = 8,
    VT_VECTOR_MEM = 10,
    VT_FIELD_RANGE_MEM = 12,
    VT_BITMAP_MEM = 14,
    VT_DOC_NUM = 16,
    VT_MAX_DOCID = 18,
    VT_MIN_INDEXED_NUM = 20
  };
  int32_t index_status() const {
    return GetField<int32_t>(VT_INDEX_STATUS, 0);
  }
  int64_t table_mem() const {
    return GetField<int64_t>(VT_TABLE_MEM, 0);
  }
  int64_t index_mem() const {
    return GetField<int64_t>(VT_INDEX_MEM, 0);
  }
  int64_t vector_mem() const {
    return GetField<int64_t>(VT_VECTOR_MEM, 0);
  }
  int64_t field_range_mem() const {
    return GetField<int64_t>(VT_FIELD_RANGE_MEM, 0);
  }
  int64_t bitmap_mem() const {
    return GetField<int64_t>(VT_BITMAP_MEM, 0);
  }
  int32_t doc_num() const {
    return GetField<int32_t>(VT_DOC_NUM, 0);
  }
  int32_t max_docid() const {
    return GetField<int32_t>(VT_MAX_DOCID, 0);
  }
  int32_t min_indexed_num() const {
    return GetField<int32_t>(VT_MIN_INDEXED_NUM, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_INDEX_STATUS) &&
           VerifyField<int64_t>(verifier, VT_TABLE_MEM) &&
           VerifyField<int64_t>(verifier, VT_INDEX_MEM) &&
           VerifyField<int64_t>(verifier, VT_VECTOR_MEM) &&
           VerifyField<int64_t>(verifier, VT_FIELD_RANGE_MEM) &&
           VerifyField<int64_t>(verifier, VT_BITMAP_MEM) &&
           VerifyField<int32_t>(verifier, VT_DOC_NUM) &&
           VerifyField<int32_t>(verifier, VT_MAX_DOCID) &&
           VerifyField<int32_t>(verifier, VT_MIN_INDEXED_NUM) &&
           verifier.EndTable();
  }
};

struct EngineStatusBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_index_status(int32_t index_status) {
    fbb_.AddElement<int32_t>(EngineStatus::VT_INDEX_STATUS, index_status, 0);
  }
  void add_table_mem(int64_t table_mem) {
    fbb_.AddElement<int64_t>(EngineStatus::VT_TABLE_MEM, table_mem, 0);
  }
  void add_index_mem(int64_t index_mem) {
    fbb_.AddElement<int64_t>(EngineStatus::VT_INDEX_MEM, index_mem, 0);
  }
  void add_vector_mem(int64_t vector_mem) {
    fbb_.AddElement<int64_t>(EngineStatus::VT_VECTOR_MEM, vector_mem, 0);
  }
  void add_field_range_mem(int64_t field_range_mem) {
    fbb_.AddElement<int64_t>(EngineStatus::VT_FIELD_RANGE_MEM, field_range_mem, 0);
  }
  void add_bitmap_mem(int64_t bitmap_mem) {
    fbb_.AddElement<int64_t>(EngineStatus::VT_BITMAP_MEM, bitmap_mem, 0);
  }
  void add_doc_num(int32_t doc_num) {
    fbb_.AddElement<int32_t>(EngineStatus::VT_DOC_NUM, doc_num, 0);
  }
  void add_max_docid(int32_t max_docid) {
    fbb_.AddElement<int32_t>(EngineStatus::VT_MAX_DOCID, max_docid, 0);
  }
  void add_min_indexed_num(int32_t min_indexed_num) {
    fbb_.AddElement<int32_t>(EngineStatus::VT_MIN_INDEXED_NUM, min_indexed_num, 0);
  }
  explicit EngineStatusBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  EngineStatusBuilder &operator=(const EngineStatusBuilder &);
  flatbuffers::Offset<EngineStatus> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<EngineStatus>(end);
    return o;
  }
};

inline flatbuffers::Offset<EngineStatus> CreateEngineStatus(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t index_status = 0,
    int64_t table_mem = 0,
    int64_t index_mem = 0,
    int64_t vector_mem = 0,
    int64_t field_range_mem = 0,
    int64_t bitmap_mem = 0,
    int32_t doc_num = 0,
    int32_t max_docid = 0,
    int32_t min_indexed_num = 0) {
  EngineStatusBuilder builder_(_fbb);
  builder_.add_bitmap_mem(bitmap_mem);
  builder_.add_field_range_mem(field_range_mem);
  builder_.add_vector_mem(vector_mem);
  builder_.add_index_mem(index_mem);
  builder_.add_table_mem(table_mem);
  builder_.add_min_indexed_num(min_indexed_num);
  builder_.add_max_docid(max_docid);
  builder_.add_doc_num(doc_num);
  builder_.add_index_status(index_status);
  return builder_.Finish();
}

inline const gamma_api::EngineStatus *GetEngineStatus(const void *buf) {
  return flatbuffers::GetRoot<gamma_api::EngineStatus>(buf);
}

inline const gamma_api::EngineStatus *GetSizePrefixedEngineStatus(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<gamma_api::EngineStatus>(buf);
}

inline bool VerifyEngineStatusBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<gamma_api::EngineStatus>(nullptr);
}

inline bool VerifySizePrefixedEngineStatusBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<gamma_api::EngineStatus>(nullptr);
}

inline void FinishEngineStatusBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<gamma_api::EngineStatus> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedEngineStatusBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<gamma_api::EngineStatus> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace gamma_api

#endif  // FLATBUFFERS_GENERATED_ENGINESTATUS_GAMMA_API_H_
