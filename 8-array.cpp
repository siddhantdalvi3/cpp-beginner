#include <iostream>
#include <array>

using namespace std;

int main()
{

    string myArr[] = {"1", "2", "3", "3332"};

    cout << myArr[2] << endl;

    int arrayLength = end(myArr) - begin(myArr);

    for (int i = 0; i < arrayLength; ++i)
    {
        if (i % 2 == 0)
        {
            myArr[i] = "Its Even";
        }
        cout << myArr[i] << endl;
    }

    return 0;
}