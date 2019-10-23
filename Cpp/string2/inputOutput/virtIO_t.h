#ifndef VIRTIO_H
#define VIRTIO_H
#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

class virtIO_t
{
    protected:


    private:
        string filePath;
        string fileMode;
        virtIO_t(const virtIO_t& v);

    public:
        virtual ~virtIO_t();
        virtIO_t();
        virtIO_t(string filePath, string fileMode);

        const string GetFilePath() const
        {
            return filePath;
        }
        const string GetFileMode() const
        {
            return fileMode;
        }

        virtual virtIO_t& operator << (char  val) = 0;
        virtual virtIO_t& operator >> (char& val) = 0;
        virtual virtIO_t& operator << (float  val) = 0;
        virtual virtIO_t& operator >> (float& val) = 0;
        virtual virtIO_t& operator << (int  val) = 0;
        virtual virtIO_t& operator >> (int& val) = 0;
        virtual virtIO_t& operator << (short  val) = 0;
        virtual virtIO_t& operator >> (short& val) = 0;
        virtual virtIO_t& operator << (long  val) = 0;
        virtual virtIO_t& operator >> (long& val) = 0;
        virtual virtIO_t& operator << (unsigned char  val) = 0;
        virtual virtIO_t& operator >> (unsigned char& val) = 0;
        virtual virtIO_t& operator << (double  val) = 0;
        virtual virtIO_t& operator >> (double& val) = 0;
        virtual virtIO_t& operator << (unsigned int  val) = 0;
        virtual virtIO_t& operator >> (unsigned int& val) = 0;
        virtual virtIO_t& operator << (unsigned short  val) = 0;
        virtual virtIO_t& operator >> (unsigned short& val) = 0;
        virtual virtIO_t& operator << (unsigned long  val) = 0;
        virtual virtIO_t& operator >> (unsigned long& val) = 0;
};

#endif
