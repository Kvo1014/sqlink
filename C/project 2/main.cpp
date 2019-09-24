#include <iostream>

using namespace std;

int main()
{
  int Age=12;
  int *p_age =&Age;

    cout << "Adress of variable age is:" << Age << endl;
    cout << "Adress of variable p_age is :" << *p_age <<endl;
    cout <<  " enter the new age:"<<endl;
    cin  >> *p_age;

    cout << Age<<endl;
    cout << p_age<< endl;
    return 0;
}
