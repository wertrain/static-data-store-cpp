#include "StoredData.h"

namespace nnfw
{

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

} // end of namespace nnfw
