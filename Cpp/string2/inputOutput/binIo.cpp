#include "stdafx.h"
#include "binIO_t.h"

binIO_t::binIO_t(string filePath, string mode) : virtIO_t(filePath, (string(mode) + "b").c_str()){}

    virtIO_t& binIO_t::operator << (const char val)
    {

    }

    virtIO_t& binIO_t::operator >> (char &val)
    {

    }
