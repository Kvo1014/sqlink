#include <iostream>

using namespace std;

string Function (string);

int main()
{
    string sentence=Function ("stas");
    cout<< sentence<<endl;
    return 0;
}

string Function(string name)
{
 cout<<"hello,"+name+"!"<<endl;
}
