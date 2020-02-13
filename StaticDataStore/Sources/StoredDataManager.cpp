#include "StoredDataManager.h"

namespace nnfw
{

StoredDataManager::StoredDataManager()
    : m_contexts()
{

}

StoredDataManager::~StoredDataManager()
{

}

int StoredDataManager::AddUser(const int userId)
{
    if (m_contexts.size() > userId)
    {
        if (!m_contexts[userId].used)
        {
            m_contexts[userId].used = true;
            return userId;
        }
    }
    return -1;
}

bool StoredDataManager::RemoveUser(const int userId)
{
    if (m_contexts.size() > userId)
    {
        if (m_contexts[userId].used)
        {
            m_contexts[userId].used = false;
            m_contexts[userId].storeData.Clear();
            return true;
        }
    }
    return false;
}

} // end of namespace nnfw
