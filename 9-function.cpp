#include <iostream>
#include <vector>

using namespace std;

void greetUser()
{
    cout << "Greetings, fellow Human" << endl;
}

int askArraySize()
{
    int userInput;
    cout << "Enter size of array between 1 to 10 : ";
    cin >> userInput;

    while (userInput < 1 || userInput > 10)
        userInput = askArraySize();

    return userInput;
}

void assignVectorValues(int vectorLength, vector<int> &vec)
{
    int temp;
    for (int i; i < vectorLength; ++i)
    {
        cout << "Enter value for index " << i << " : ";
        cin >> temp;
        vec[i] = temp;
    }
}

void printVector(int vectorLength, vector<int> &vec)
{
    cout << "[ ";
    for (int i; i < vectorLength; ++i)
    {
        cout << vec[i];
        if (i != vectorLength - 1)
            cout << ",\t";
    }
    cout << " ]" << endl;
}

int main()
{

    greetUser();
    int arrLength = askArraySize();
    vector<int> newVector(arrLength);
    assignVectorValues(arrLength, newVector);
    printVector(arrLength, newVector);
    return 0;
}