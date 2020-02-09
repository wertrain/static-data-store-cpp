#pragma once

#include <array>
#include "StatsData.h"

class StatsManager
{
public:
    static const int MaxUserNum = 8;
    StatsManager();
    ~StatsManager();

    int AddUser(const int userId);
    bool RemoveUser(const int userId);

private:
    struct UserContext
    {
        StatsData statsData;
        int32_t used;
    };

private:
    std::array<UserContext, MaxUserNum> m_contexts;
};

