#pragma once

#include <array>
#include "StoredData.h"

namespace nnfw
{

class StoredDataManager
{
public:
    static const int MaxUserNum = 8;
    StoredDataManager();
    ~StoredDataManager();

    int AddUser(const int userId);
    bool RemoveUser(const int userId);

private:
    struct UserContext
    {
        StoredData storeData;
        int32_t used;
    };

private:
    std::array<UserContext, MaxUserNum> m_contexts;
};

} // end of namespace nnfw
