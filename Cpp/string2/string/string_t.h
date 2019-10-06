#pragma once


class  String_t
{

     public:
         String_t ();
         String_t (const char* str);
         String_t (String_t&s);
      ~String_t();
         String_t& operator=(const String_t& s);

         const char* getString() const;
         int stringCompare(const String_t& s) const;
         void print() const;
         const int getLenght() const;
         void setString(const char* str);


       private:
            char* str;
            int lenght;
            char* createFrom(const char* str);

};
