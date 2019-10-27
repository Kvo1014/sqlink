#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

class VirtIO_t
{
    protected:


    private:
        string filePath;
        string fileMode;
        VirtIO_t(const VirtIO_t& v);

    public:
        virtual ~VirtIO_t();
        VirtIO_t();
        VirtIO_t(string filePath, string fileMode);

        const string GetFilePath() const
        {
            return filePath;
        }
        const string GetFileMode() const
        {
            return fileMode;
        }

        virtual VirtIO_t& operator << (char  val) = 0;
        virtual VirtIO_t& operator >> (char& val) = 0;
        virtual VirtIO_t& operator << (float  val) = 0;
        virtual VirtIO_t& operator >> (float& val) = 0;
        virtual VirtIO_t& operator << (int  val) = 0;
        virtual VirtIO_t& operator >> (int& val) = 0;
        virtual VirtIO_t& operator << (short  val) = 0;
        virtual VirtIO_t& operator >> (short& val) = 0;
        virtual VirtIO_t& operator << (long  val) = 0;
        virtual VirtIO_t& operator >> (long& val) = 0;
        virtual VirtIO_t& operator << (unsigned char  val) = 0;
        virtual VirtIO_t& operator >> (unsigned char& val) = 0;
        virtual VirtIO_t& operator << (double  val) = 0;
        virtual VirtIO_t& operator >> (double& val) = 0;
        virtual VirtIO_t& operator << (unsigned int  val) = 0;
        virtual VirtIO_t& operator >> (unsigned int& val) = 0;
        virtual VirtIO_t& operator << (unsigned short  val) = 0;
        virtual VirtIO_t& operator >> (unsigned short& val) = 0;
        virtual VirtIO_t& operator << (unsigned long  val) = 0;
        virtual VirtIO_t& operator >> (unsigned long& val) = 0;
};


