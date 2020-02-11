#pragma once
#include <array>

#include "StatsValue.h"

class StatsData
{
public:
    static const int MaxDataNum = 1024;

public:
    StatsData();
    void Clear();

private:
    std::array<StatsValue, MaxDataNum> m_values;
};
