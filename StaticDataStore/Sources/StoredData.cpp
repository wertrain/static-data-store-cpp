#include "StoredData.h"

StoredData::StoredData()
{
}

void StoredData::Clear()
{
    for (auto&& i : m_values)
    {
        i.Clear();
    }
}
