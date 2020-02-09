#pragma once
#include <array>

#include "StatsValue.h"

class StatsData
{
public:
    StatsData();
    void Clear();

private:
    std::array<StatsValue, 1024> m_values;
};
