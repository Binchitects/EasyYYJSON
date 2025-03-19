#include "easy-yyjson.hpp"

EasyYYJSON::Document::Document()
{
    _doc = std::shared_ptr<yyjson_mut_doc>(yyjson_mut_read("", 0, YYJSON_READ_NOFLAG), yyjson_mut_doc_free);
}

EasyYYJSON::Value::Value()
{

}

EasyYYJSON::Array::Array()
{

}

EasyYYJSON::Object::Object()
{

}

EasyYYJSON::ConstDocument::ConstDocument()
{

}

EasyYYJSON::ConstValue::ConstValue()
{

}

EasyYYJSON::ConstArray::ConstArray()
{

}

EasyYYJSON::ConstObject::ConstObject()
{

}

