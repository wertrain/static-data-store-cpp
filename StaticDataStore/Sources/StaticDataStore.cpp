#include "StaticDataStore.h"

namespace nnfw
{

#ifndef NNFW_STORED_DATA_RULE_FILE 
#define NNFW_STORED_DATA_RULE_FILE "DefaultStoredDataRule.h"
#endif

const StaticDataStore::Data StaticDataStore::StoredData[] =
{
#define NNFW_STORED_DATA_RULE(index, type, operate) { index }
#include NNFW_STORED_DATA_RULE_FILE
#undef NNFW_STORED_DATA_RULE
};

} // end of namespace nnfw
