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
            explicit Value();
            Value();
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
            explicit MutValue();
            MutValue();
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