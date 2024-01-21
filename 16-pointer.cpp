#include <iostream>

using namespace std;

int main()
{

    int age = 21;
    string name = "Ram";
    double gpa = 9.18;

    // Pointers address to variable's memory address

    cout << "age variable memory is located at : " << &age << endl;
    cout << "name variable memory is located at : " << &name << endl;
    cout << "gpa variable memory is located at : " << &gpa << endl;

    int *pAge = &age;
    string *pName = &name;
    double *pGpa = &gpa;

    cout << "Value of pAge is memory address : " << pAge << endl;
    cout << "Value of pName is memory address : " << pName << endl;
    cout << "Value of pGpa is memory address : " << pGpa << endl;

    int a = *pAge;
    cout << a << " - " << &a << endl;

    return 0;
}