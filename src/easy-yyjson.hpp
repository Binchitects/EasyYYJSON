#pragma once

extern "C" {
#include <yyjson.h>
}

#include <memory>
#include <string>
<<<<<<< Updated upstream
=======

extern "C"
{
#include <yyjson.h>
}
>>>>>>> Stashed changes

namespace EasyYYJSON
{
    // Forward declaration of 
    class Value;
    class Array;
    class Object;
    class Document;
    class ConstValue;
    class ConstArray;
    class ConstObject;
    class ConstDocument;

    enum StringifyFlag
    {
        NoFlag              = 0x0000,
        PrettyIndent        = 0x0001,
        WideIndent          = 0x0002,
        ASCIIOnly           = 0x0010,
        AllowInvalidUnicode = 0x0020,
        NewLineEnding       = 0x0100
    }

    // Mutable json Document
    class Document
    {
        public:
            explicit Document();
<<<<<<< Updated upstream
            explicit Document(const std::string &json);

            bool parse(const std::string &json);

            /*
            * Faster parsing, json is not useable after calling this function
            */
            bool parseInSitu(std::string &json);

            Value getRoot();
            bool setRoot(Value &value);

            std::string stringify(StringifyFlag flags = StringifyFlag::NoFlag);
            friend std::ostream &operator << (std::ostream &os, const Document &doc)
            {
                os << doc.stringify(StringifyFlag::PrettyIndent | StringifyFlag::NewLineEnding);
                return os;
            }
=======
            bool parse(const std::string &str);
            std::string lastErrorMessage() const;
            static Document fromStdString(const std::string &str);
            Value getRoot();
            void setRoot(Value &value);
>>>>>>> Stashed changes
        protected:
        private:
            std::shared_ptr<yyjson_mut_doc> _doc;
            friend class Value;
    };

    // Mutable json Value
    class Value
    {
        public:
            explicit Value();

            bool clear();

            bool isArray() const;
            bool isObject() const;
            bool isString() const;
            bool isBoolean() const;
            bool isInteger() const;
            bool isFloat() const;
            bool isLong() const;
            bool isDouble() const;

            Array getArray() const;
            Object getObject() const;
            std::string getString() const;
            bool getBoolean() const;
            int getInteger() const;
            float getFloat() const;
            long long getLong() const;
            double getDouble() const;
            
            bool setValue(const Value &value);
            bool setArray(const Array &array);
            bool setObject(const Object &object);
            bool setString(const std::string &str);
            bool setBoolean(bool boolean);
            bool setInteger(int32_t integer);
            bool setFloat(float decimal);
            bool setLong(int64_t longInteger);
            bool setDouble(double longDecimal);

            Value &operator = (const Value &value);
            Value &operator = (const Array &array);
            Value &operator = (const Object &object);
            Value &operator = (const std::string &str);
            Value &operator = (bool boolean);
            Value &operator = (int32_t integer);
            Value &operator = (float decimal);
            Value &operator = (int64_t longInteger);
            Value &operator = (double longDecimal);

        protected:
        private:
            std::shared_ptr<yyjson_mut_doc> _doc;
    };    
    
    // Mutable json Array
    class Array
    {
        public:
            explicit Array();

            bool clear();

            Value &at(size_t index);
            Value &operator [] (size_t index);
        protected:
        private:
            explicit Array(std::shared_ptr<yyjson_mut_doc> doc, yyjson_mut_val *arr);
            std::shared_ptr<yyjson_mut_doc> _doc;
            yyjson_mut_val *_arr;
    };

    // Mutable json Object
    class Object
    {
        public:
            explicit Object();

            bool clear();
            bool erase(const std::string &key);
            
            Value &operator [] (const std::string &key);
            bool hasMember(const std::string &key) const;

        protected:
        private:
            explicit Object(std::shared_ptr<yyjson_mut_doc> doc, yyjson_mut_val *obj);
            std::shared_ptr<yyjson_mut_doc> _doc;
            yyjson_mut_val *_obj;
    };
    
    // Immutable json document
    class ConstDocument
    {
        public:
            explicit ConstDocument();
        protected:
        private:
            std::shared_ptr<yyjson_doc> _doc;
    };

    // Immutable json value
    class ConstValue
    {
        public:
            explicit ConstValue();
        protected:
        private:
            std::shared_ptr<yyjson_doc> _doc;
    };    
    
    // Immutable json array
    class ConstArray
    {
        public:
            explicit ConstArray();
        protected:
        private:
            std::shared_ptr<yyjson_doc> _doc;
    };

    // Immutable json object
    class ConstObject
    {
        public:
            explicit ConstObject();
        protected:
        private:
            std::shared_ptr<yyjson_doc> _doc;
    };
}
