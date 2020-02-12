#pragma once

#include <array>
#include "StoredData.h"

class StaticDataStore
{
public:
    static const int MaxUserNum = 8;
    StaticDataStore();
    ~StaticDataStore();

    int AddUser(const int userId);
    bool RemoveUser(const int userId);

private:
    struct UserContext
    {
        StoredData statsData;
        int32_t used;
    };

private:
    std::array<UserContext, MaxUserNum> m_contexts;
};

