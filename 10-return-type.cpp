#include <iostream>
#include <cctype>
#include <string>

using namespace std;

double cube(double num)
{
    double result = num * num * num;
    return result;
}

string capitalize(string name)
{
    char firstCh = toupper(name[0]);
    name.erase(0, 1);
    name.insert(0, string(1, firstCh));
    return name;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Cube of " << num << " is : " << cube(num) << endl;
    return 0;
}