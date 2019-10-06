#pragma once
#include "mem_manager.h"
#include <cstdlib>
using namespace std;

class MemPage_t : public MemManager
{
    public:
        ~MemPage_t();
        MemPage_t();
        MemPage_t(size_t cap);

        size_t getCapacity() const {return capacity;}

        static size_t getDefCapacity() {return defaultCap;}
        static size_t setDefCapacity(size_t cap) {defaultCap = cap;}

        virtual size_t read (void* buffer, size_t size);
        virtual size_t read (void* buffer, size_t size, size_t pos);

        virtual size_t write (const void* buffer, size_t size);
        virtual size_t write (const void* buffer, size_t size, size_t pos);

    private:
        MemPage_t (const MemPage_t& mp) {}
        MemPage_t& operator= (const MemPage_t& mp) {}

        char* stream;
        size_t capacity;
        static size_t defaultCap;

        size_t readData (void* buffer, size_t size);
        size_t writeData (const void* buffer, size_t size);
};
