#ifndef PARSER_H
#define PARSER_H
#include <vector>
#include <string>

class Tokenizer;
class Analyzer;

class Parser
{
 private:
        std::vector<std::string>   m_tokens;
        Parser(const Parser& p);
        Parser& operator=(const Parser& p);
        Tokenizer* m_tokenizer;
        Analyzer*  m_analyzer;

    public:
        ~Parser();
         Parser();
         void parse(const char* fileName);

   
};




















#endif // PARSER_H
