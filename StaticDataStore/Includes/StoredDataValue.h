#pragma once
#include <cinttypes>

namespace nnfw
{

class StoredDataValue
{
public:
    enum ValueType : int32_t
    {
        TYPE_UNDECIDED,
        TYPE_INT32,
        TYPE_UINT32,
        TYPE_INT64,
        TYPE_UINT64,
        TYPE_FLOAT,
        TYPE_DOUBLE
    };

    enum OperatorType : int32_t
    {
        OP_MIN,
        OP_MAX,
        OP_SUM,
        OP_REPLACE,
    };

    StoredDataValue();
    StoredDataValue(const int32_t value)  { Set(value); }
    StoredDataValue(const uint32_t value) { Set(value); }
    StoredDataValue(const int64_t value)  { Set(value); }
    StoredDataValue(const uint64_t value) { Set(value); }
    StoredDataValue(const float value)    { Set(value); }
    StoredDataValue(const double value)   { Set(value); }
    void Set(const int32_t value);
    void Set(const uint32_t value);
    void Set(const int64_t value);
    void Set(const uint64_t value);
    void Set(const float value);
    void Set(const double value);
    void Clear();

private:
    uint64_t m_value;
    ValueType m_type;
};

} // end of namespace nnfw
