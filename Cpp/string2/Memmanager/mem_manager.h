#pragma once
#include <cstdlib>

using namespace std;

class MemManager
{
    public:
        MemManager();

        size_t getCurrPosition() const {return currPosition;}
        void  setCurrPosition(size_t pos);
        bool  isFull() const {return memFull;}
        size_t getActualSize() const {return actualSize;}

        virtual size_t read(void* buffer, size_t size) {return 0;}
        virtual size_t read(void* buffer, size_t size, size_t pos) {return 0;}

        virtual size_t write(const void* buffer, size_t size) {return 0;}
        virtual size_t write(const void* buffer, size_t size, size_t pos) {return 0;}

    protected:

        virtual ~MemManager() {}

        bool memFull;
        size_t actualSize;
        size_t currPosition;

    private:
        MemManager(const MemManager& mm) {}
        MemManager& operator=(const MemManager& mm) {}
};
