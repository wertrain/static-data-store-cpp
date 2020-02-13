#include "StoredDataValue.h"

namespace nnfw
{

StoredDataValue::StoredDataValue()
    : m_value(0)
    , m_type(TYPE_UNDECIDED)
{

}

void StoredDataValue::Set(const int32_t value)
{
    union
    {
        int32_t i;
        uint64_t v;
    } u;
    u.i = value;
    m_value = u.v;
    m_type = TYPE_INT32;
}

void StoredDataValue::Set(const uint32_t value)
{
    union
    {
        uint32_t i;
        uint64_t v;
    } u;
    u.i = value;
    m_value = u.v;
    m_type = TYPE_UINT32;
}

void StoredDataValue::Set(const int64_t value)
{
    union
    {
        int64_t i;
        uint64_t v;
    } u;
    u.i = value;
    m_value = value;
    m_type = TYPE_INT64;
}

void StoredDataValue::Set(const uint64_t value)
{
    m_value = value;
    m_type = TYPE_UINT64;
}

void StoredDataValue::Set(const float value)
{
    union
    {
        float i;
        uint64_t v;
    } u;
    u.i = value;
    m_value = u.v;
    m_type = TYPE_FLOAT;
}

void StoredDataValue::Set(const double value)
{
    union
    {
        double i;
        uint64_t v;
    } u;
    u.i = value;
    m_value = u.v;
    m_type = TYPE_DOUBLE;
}

void StoredDataValue::Clear()
{
    m_value = 0;
    m_type = TYPE_UNDECIDED;
}

} // end of namespace nnfw
