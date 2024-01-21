#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        cout << "In for loop i is " << i << endl;
    }

    int i = 0;
    while (i < 10)
    {
        cout << "In while loop i is " << i << endl;
        ++i;
    }

    int j = 0;
    do
    {
        cout << "In do while loop j is " << j << endl;
        ++j;
    } while (j < 10);

    return 0;
}