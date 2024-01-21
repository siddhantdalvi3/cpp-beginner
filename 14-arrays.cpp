#include <iostream>

using namespace std;

int main()
{

    string names[] = {"Jake",
                      "Rohan",
                      "Ajit",
                      "John",
                      "Jane"};

    for (int i = 0; i <= names->length(); ++i)
    {
        cout << "Are you " << names[i] << " ?" << endl;
    }

    return 0;
}