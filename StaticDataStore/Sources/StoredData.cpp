#include "StatsData.h"

StatsData::StatsData()
{
}

void StatsData::Clear()
{
    for (auto&& i : m_values)
    {
        i.Clear();
    }
}
