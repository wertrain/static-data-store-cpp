#include "StaticDataStore.h"

StaticDataStore::StaticDataStore()
    : m_contexts()
{

}

StaticDataStore::~StaticDataStore()
{

}

int StaticDataStore::AddUser(const int userId)
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

bool StaticDataStore::RemoveUser(const int userId)
{
    if (m_contexts.size() > userId)
    {
        if (m_contexts[userId].used)
        {
            m_contexts[userId].used = false;
            m_contexts[userId].statsData.Clear();
            return true;
        }
    }
    return false;
}