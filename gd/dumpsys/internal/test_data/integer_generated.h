// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_INTEGER_TESTING_H_
#define FLATBUFFERS_GENERATED_INTEGER_TESTING_H_

#include "flatbuffers/flatbuffers.h"

namespace testing {

struct TestTableInteger;
struct TestTableIntegerBuilder;

struct TestTableInteger FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TestTableIntegerBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE { VT_TEST_INT = 4 };
  int32_t test_int() const {
    return GetField<int32_t>(VT_TEST_INT, 0);
  }
  bool Verify(flatbuffers::Verifier& verifier) const {
    return VerifyTableStart(verifier) && VerifyField<int32_t>(verifier, VT_TEST_INT) && verifier.EndTable();
  }
};

struct TestTableIntegerBuilder {
  typedef TestTableInteger Table;
  flatbuffers::FlatBufferBuilder& fbb_;
  flatbuffers::uoffset_t start_;
  void add_test_int(int32_t test_int) {
    fbb_.AddElement<int32_t>(TestTableInteger::VT_TEST_INT, test_int, 0);
  }
  explicit TestTableIntegerBuilder(flatbuffers::FlatBufferBuilder& _fbb) : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TestTableIntegerBuilder& operator=(const TestTableIntegerBuilder&);
  flatbuffers::Offset<TestTableInteger> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TestTableInteger>(end);
    return o;
  }
};

inline flatbuffers::Offset<TestTableInteger> CreateTestTableInteger(
    flatbuffers::FlatBufferBuilder& _fbb, int32_t test_int = 0) {
  TestTableIntegerBuilder builder_(_fbb);
  builder_.add_test_int(test_int);
  return builder_.Finish();
}

inline const testing::TestTableInteger* GetTestTableInteger(const void* buf) {
  return flatbuffers::GetRoot<testing::TestTableInteger>(buf);
}

inline const testing::TestTableInteger* GetSizePrefixedTestTableInteger(const void* buf) {
  return flatbuffers::GetSizePrefixedRoot<testing::TestTableInteger>(buf);
}

inline bool VerifyTestTableIntegerBuffer(flatbuffers::Verifier& verifier) {
  return verifier.VerifyBuffer<testing::TestTableInteger>(nullptr);
}

inline bool VerifySizePrefixedTestTableIntegerBuffer(flatbuffers::Verifier& verifier) {
  return verifier.VerifySizePrefixedBuffer<testing::TestTableInteger>(nullptr);
}

inline const char* TestTableIntegerExtension() {
  return "bfbs";
}

inline void FinishTestTableIntegerBuffer(
    flatbuffers::FlatBufferBuilder& fbb, flatbuffers::Offset<testing::TestTableInteger> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTestTableIntegerBuffer(
    flatbuffers::FlatBufferBuilder& fbb, flatbuffers::Offset<testing::TestTableInteger> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace testing

#endif  // FLATBUFFERS_GENERATED_INTEGER_TESTING_H_