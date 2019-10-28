#ifndef TOKENIZER_H
#define TOKENIZER_H
#include <vector>
#include <string>

class Tokenizer
{
    public:
        ~Tokenizer() {}
        Tokenizer() {}

        void tokenize(const std::string& line, std::vector<std::string>& tokens);
        static void setDelimeters(const std::string& del) { m_delimeters = del; } 
        static std::string& getDelimeters() { return m_delimeters; }
     
    private:
        Tokenizer(const Tokenizer& t);
        Tokenizer& operator=(const Tokenizer& t);

        static std::string m_delimeters;
};

#endif
