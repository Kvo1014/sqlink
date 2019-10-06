#include "mem_manager.h"

MemManager::MemManager()
{
    memFull = false;
    actualSize = 0;
    currPosition = 0;
}

void MemManager::setCurrPosition(size_t pos)
{
    if(pos > actualSize)
    {
        currPosition = actualSize;
    }
    else
    {
        currPosition = pos;
    }
}
