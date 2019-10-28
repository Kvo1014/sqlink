#include "tokenizer.h"
#include <fstream>
#include "parser.h"
#include "analyzer.h"

using namespace std;

Parser::Parser()
{
    m_tokenizer = new Tokenizer;
    m_analyzer = new Analyzer;
}


void Parser::parse(const char* fileName)
{
    ifstream file(fileName);
    string line;
    size_t lineNum = 0;

    if(file.is_open())
    {
        while(getline(file, line))
        {
            ++lineNum;
            m_tokenizer->tokenize(line + "\n", m_tokens);
            m_analyzer->analyze(m_tokens, lineNum);
        }

        m_analyzer->analyzeEnd();
        file.close();
    }
    else throw string("Unable to open file");
}

Parser::~Parser()
{
    delete m_tokenizer;
    delete m_analyzer;
}
