#pragma once

#include <array>
#include "StoredDataValue.h"

namespace nnfw
{

class StoredData
{
public:
    static const int MaxDataNum = 1024;

public:
    StoredData();
    void Clear();

private:
    std::array<StoredDataValue, MaxDataNum> m_values;
};

} // end of namespace nnfw
