#ifndef __EASY_YYJSON_HPP__
#define __EASY_YYJSON_HPP__

#include <stdint.h>
#include <string>

namespace EasyYYJSON
{
    namespace Json
    {
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
        class Value
        {
        public:
            explicit Value(const bool &rValue);
            explicit Value(const int8_t &rValue);
            explicit Value(const int16_t &rValue);
            explicit Value(const int32_t &rValue);
            explicit Value(const int64_t &rValue);
            explicit Value(const uint8_t &rValue);
            explicit Value(const uint16_t &rValue);
            explicit Value(const uint32_t &rValue);
            explicit Value(const uint64_t &rValue);
            explicit Value(const float &rValue);
            explicit Value(const double &rValue);
            explicit Value(const char *rValue);
            explicit Value(const wchar_t *rValue);
            explicit Value(const std::string &rValue);
            explicit Value(const std::wstring &rValue);
            explicit Value(const Value &rValue);
            explicit Value(const Object &rValue);
            explicit Value(const Array &rValue);
            explicit Value(const MutValue &rValue);
            explicit Value(const MutObject &rValue);
            explicit Value(const MutArray &rValue);

            Value(const bool &rValue);
            Value(const int8_t &rValue);
            Value(const int16_t &rValue);
            Value(const int32_t &rValue);
            Value(const int64_t &rValue);
            Value(const uint8_t &rValue);
            Value(const uint16_t &rValue);
            Value(const uint32_t &rValue);
            Value(const uint64_t &rValue);
            Value(const float &rValue);
            Value(const double &rValue);
            Value(const char *rValue);
            Value(const wchar_t *rValue);
            Value(const std::string &rValue);
            Value(const std::wstring &rValue);
            Value(const Value &rValue);
            Value(const Object &rValue);
            Value(const Array &rValue);
            Value(const MutValue &rValue);
            Value(const MutObject &rValue);
            Value(const MutArray &rValue);

            ~Value();

            Value &operator=(const bool &rValue);
            Value &operator=(const int8_t &rValue);
            Value &operator=(const int16_t &rValue);
            Value &operator=(const int32_t &rValue);
            Value &operator=(const int64_t &rValue);
            Value &operator=(const uint8_t &rValue);
            Value &operator=(const uint16_t &rValue);
            Value &operator=(const uint32_t &rValue);
            Value &operator=(const uint64_t &rValue);
            Value &operator=(const float &rValue);
            Value &operator=(const double &rValue);
            Value &operator=(const char *rValue);
            Value &operator=(const wchar_t *rValue);
            Value &operator=(const std::string &rValue);
            Value &operator=(const std::wstring &rValue);
            Value &operator=(const Value &rValue);
            Value &operator=(const Object &rValue);
            Value &operator=(const Array &rValue);
            Value &operator=(const MutValue &rValue);
            Value &operator=(const MutObject &rValue);
            Value &operator=(const MutArray &rValue);

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
        };

        /*
         * Mutable json value
         */
        class MutValue
        {
        public:
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

            MutValue(const bool &rValue);
            MutValue(const int8_t &rValue);
            MutValue(const int16_t &rValue);
            MutValue(const int32_t &rValue);
            MutValue(const int64_t &rValue);
            MutValue(const uint8_t &rValue);
            MutValue(const uint16_t &rValue);
            MutValue(const uint32_t &rValue);
            MutValue(const uint64_t &rValue);
            MutValue(const float &rValue);
            MutValue(const double &rValue);
            MutValue(const char *rValue);
            MutValue(const wchar_t *rValue);
            MutValue(const std::string &rValue);
            MutValue(const std::wstring &rValue);
            MutValue(const Value &rValue);
            MutValue(const Object &rValue);
            MutValue(const Array &rValue);
            MutValue(const MutValue &rValue);
            MutValue(const MutObject &rValue);
            MutValue(const MutArray &rValue);

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
        };
    }
}

#endif // __EASY_YYJSON_HPP__