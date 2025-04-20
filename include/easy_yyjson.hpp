#ifndef __EASY_YYJSON_HPP__
#define __EASY_YYJSON_HPP__

#include <memory>
#include <stdint.h>
#include <string>

struct yyjson_doc;
struct yyjson_mut_doc;
struct yyjson_val;
struct yyjson_mut_val;

namespace EasyJSON {
namespace Json {
class Value;
class Object;
class Array;
class Document;
class MutValue;
class MutObject;
class MutArray;
class MutDocument;

/*
 * Read-only json value
 */
class Value {
public:
  explicit Value();
  explicit Value(Document &doc, yyjson_val *value);
  ~Value();

  bool isNull() const;
  bool isBool() const;
  bool isInt8() const;
  bool isInt16() const;
  bool isInt32() const;
  bool isInt64() const;
  bool isUInt8() const;
  bool isUInt16() const;
  bool isUInt32() const;
  bool isUInt64() const;
  bool isFloat() const;
  bool isDouble() const;
  bool isString() const;
  bool isWString() const;
  bool isObject() const;
  bool isArray() const;

  bool getBool() const;
  int8_t getInt8() const;
  int16_t getInt16() const;
  int32_t getInt32() const;
  int64_t getInt64() const;
  uint8_t getUInt8() const;
  uint16_t getUInt16() const;
  uint32_t getUInt32() const;
  uint64_t getUInt64() const;
  float getFloat() const;
  double getDouble() const;
  std::string getString() const;
  std::wstring getWString() const;
  Object getObject() const;
  Array getArray() const;

private:
  std::shared_ptr<yyjson_doc> m_doc;
};

/*
 * Read-only json object
 */
class Object {
public:
  explicit Object();
  explicit Object(Document &doc);

  bool hasMember(const std::string &key) const;

  Value getValue(const std::string &key);

  Value operator[](const std::string &key);

private:
  std::shared_ptr<yyjson_doc> m_doc;
};

/*
 * Read-only json array
 */
class Array {
public:
  explicit Array();
  explicit Array(Document &doc);

  size_t count() const;

  Value getValue(size_t index);

  Value operator[](size_t index);

private:
  std::shared_ptr<yyjson_doc> m_doc;
};

/*
 * Read-only json document
 */
class Document {
public:
  explicit Document();
  explicit Document(const Document &doc);
  explicit Document(const MutDocument &doc);
  explicit Document(const std::string &json);
  explicit Document(const char *json);
  explicit Document(std::string &json, bool inSitu = false);
  explicit Document(char *json, bool inSitu = false);

  bool parse(const std::string &json);
  bool parse(const char *json);
  bool parse(std::string &json, bool inSitu = false);
  bool parse(char *json, bool inSitu = false);

  std::string parseErrorMessage() const;

  char *stringify(bool indent = false) const;
  std::string stringify(bool indent = false, bool skipUnicode = false) const;
  bool stringify(char *buffer, bool indent = false) const;
  bool stringify(std::string &buffer, bool indent = false) const;

  bool isObject() const;
  bool isArray() const;

  Value getRoot();
  Object getRootAsObject();
  Array getRootAsArray();

  void setRoot(Value &value);
  void setRoot(Object &object);
  void setArray(Array &array);

  void clear();

private:
  std::shared_ptr<yyjson_doc> m_doc;
  unsigned char m_lastErrorCode;
};

/*
 * Mutable json value
 */
class MutValue {
public:
  explicit MutValue();
  explicit MutValue(MutDocument &doc, yyjson_mut_val *value);
  explicit MutValue(const bool &rValue);
  explicit MutValue(const int8_t &rValue);
  explicit MutValue(const int16_t &rValue);
  explicit MutValue(const int32_t &rValue);
  explicit MutValue(const int64_t &rValue);
  explicit MutValue(const uint8_t &rValue);
  explicit MutValue(const uint16_t &rValue);
  explicit MutValue(const uint32_t &rValue);
  explicit MutValue(const uint64_t &rValue);
  explicit MutValue(const float &rValue);
  explicit MutValue(const double &rValue);
  explicit MutValue(const char *rValue);
  explicit MutValue(const wchar_t *rValue);
  explicit MutValue(const std::string &rValue);
  explicit MutValue(const std::wstring &rValue);
  explicit MutValue(const Value &rValue);
  explicit MutValue(const Object &rValue);
  explicit MutValue(const Array &rValue);
  explicit MutValue(const MutValue &rValue);
  explicit MutValue(const MutObject &rValue);
  explicit MutValue(const MutArray &rValue);

  ~MutValue();

  MutValue &operator=(const bool &rValue);
  MutValue &operator=(const int8_t &rValue);
  MutValue &operator=(const int16_t &rValue);
  MutValue &operator=(const int32_t &rValue);
  MutValue &operator=(const int64_t &rValue);
  MutValue &operator=(const uint8_t &rValue);
  MutValue &operator=(const uint16_t &rValue);
  MutValue &operator=(const uint32_t &rValue);
  MutValue &operator=(const uint64_t &rValue);
  MutValue &operator=(const float &rValue);
  MutValue &operator=(const double &rValue);
  MutValue &operator=(const char *rValue);
  MutValue &operator=(const wchar_t *rValue);
  MutValue &operator=(const std::string &rValue);
  MutValue &operator=(const std::wstring &rValue);
  MutValue &operator=(const Value &rValue);
  MutValue &operator=(const Object &rValue);
  MutValue &operator=(const Array &rValue);
  MutValue &operator=(const MutValue &rValue);
  MutValue &operator=(const MutObject &rValue);
  MutValue &operator=(const MutArray &rValue);

  bool isNull() const;
  bool isBool() const;
  bool isInt8() const;
  bool isInt16() const;
  bool isInt32() const;
  bool isInt64() const;
  bool isUInt8() const;
  bool isUInt16() const;
  bool isUInt32() const;
  bool isUInt64() const;
  bool isFloat() const;
  bool isDouble() const;
  bool isString() const;
  bool isWString() const;
  bool isObject() const;
  bool isArray() const;

  bool getBool() const;
  int8_t getInt8() const;
  int16_t getInt16() const;
  int32_t getInt32() const;
  int64_t getInt64() const;
  uint8_t getUInt8() const;
  uint16_t getUInt16() const;
  uint32_t getUInt32() const;
  uint64_t getUInt64() const;
  float getFloat() const;
  double getDouble() const;
  std::string getString() const;
  std::wstring getWString() const;
  MutObject getObject() const;
  MutArray getArray() const;

private:
  std::shared_ptr<yyjson_mut_doc> m_doc;
};

/*
 * Mutable json object
 */
class MutObject {
public:
  explicit MutObject();
  explicit MutObject(MutDocument &doc);

  bool hasMember(const std::string &key) const;

  Value getValue(const std::string &key);
  void setValue(const std::string &key, Value &value);

  void erase(const std::string &key);

  void clear();

  Value operator[](const std::string &key);

private:
  std::shared_ptr<yyjson_doc> m_doc;
};

/*
 * Mutable json array
 */
class MutArray {
public:
  explicit MutArray();
  explicit MutArray(Document &doc);

  size_t count() const;

  Value getValue(size_t index);
  void setValue(size_t index, Value &value);
  void pushBack(Value &value);

  void erase(size_t index);
  Value pop(size_t index);

  Value operator[](size_t index);

private:
  std::shared_ptr<yyjson_doc> m_doc;
};

/*
 * Mutable json document
 */
class MutDocument {
public:
  explicit MutDocument();
  explicit MutDocument(const Document &doc);
  explicit MutDocument(const MutDocument &doc);
  explicit MutDocument(const std::string &json);
  explicit MutDocument(const char *json);
  explicit MutDocument(std::string &json, bool inSitu = false);
  explicit MutDocument(char *json, bool inSitu = false);

  bool parse(const std::string &json);
  bool parse(const char *json);
  bool parse(std::string &json, bool inSitu = false);
  bool parse(char *json, bool inSitu = false);

  std::string parseErrorMessage() const;

  char *stringify(bool indent = false) const;
  std::string stringify() const;
  bool stringify(char *buffer, bool indent = false) const;
  bool stringify(std::string &buffer, bool indent = false) const;

  bool isObject() const;
  bool isArray() const;

  MutValue getRoot();
  MutObject getRootAsObject();
  MutArray getRootAsArray();

  void setRoot(MutValue &value);
  void setRoot(MutObject &object);
  void setArray(MutArray &array);

  void clear();

private:
  std::shared_ptr<yyjson_mut_doc> m_doc;
  unsigned char m_lastErrorCode;
};
} // namespace Json
} // namespace EasyJSON

#endif // __EASY_YYJSON_HPP__
