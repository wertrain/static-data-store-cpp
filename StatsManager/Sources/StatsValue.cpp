#include "StatsValue.h"

StatsValue::StatsValue()
    : m_value(0)
    , m_type(TYPE_UNDECIDED)
{

}

void StatsValue::SetInt32(int32_t value)
{
    union
    {
        int32_t i;
        int64_t v;
    } u;
    u.i = value;
    m_value = u.v;
    m_type = TYPE_INT32;
}

void StatsValue::SetUInt32(uint32_t value)
{
    union
    {
        uint32_t i;
        int64_t v;
    } u;
    u.i = value;
    m_value = u.v;
    m_type = TYPE_UINT32;
}

void StatsValue::SetInt64(int64_t value)
{
    m_value = value;
    m_type = TYPE_INT64;
}

void StatsValue::SetUInt64(uint64_t value)
{
    union
    {
        uint64_t i;
        int64_t v;
    } u;
    u.i = value;
    m_value = u.v;
    m_type = TYPE_UINT64;
}

void StatsValue::SetFloat(float value)
{
    union
    {
        float i;
        int64_t v;
    } u;
    u.i = value;
    m_value = u.v;
    m_type = TYPE_FLOAT;
}

void StatsValue::SetDouble(double value)
{
    union
    {
        double i;
        int64_t v;
    } u;
    u.i = value;
    m_value = u.v;
    m_type = TYPE_DOUBLE;
}
