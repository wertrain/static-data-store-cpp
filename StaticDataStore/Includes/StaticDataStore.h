#pragma once

#include <array>
#include "StoredData.h"

namespace nnfw
{

class StaticDataStore
{
private:
    constexpr int GetDataSize() const { return 10; }
    struct Data
    {
        int32_t index;
    };
    static constexpr int N = 10;
    static const Data StoredData[];

public:
    static const int MaxUserNum = 8;
};

} // end of namespace nnfw
