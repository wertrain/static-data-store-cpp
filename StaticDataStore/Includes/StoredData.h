#pragma once
#include <array>

#include "StoredDataValue.h"

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
