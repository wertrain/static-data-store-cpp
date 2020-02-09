#include "StatsManager.h"

StatsManager::StatsManager()
    : m_contexts()
{

}

StatsManager::~StatsManager()
{

}

int StatsManager::AddUser(const int userId)
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

bool StatsManager::RemoveUser(const int userId)
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