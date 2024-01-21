#include <iostream>

using namespace std;

int main()
{
    char ans;
    cout << "What is your gender (M/F) : ";
    cin >> ans;
    switch (ans)
    {
    case 'M':
        cout << "Dude those biceps are strong" << endl;
        break;

    case 'F':
        cout << "Wow, you don't need makeup i guess" << endl;
        break;

    default:
        cout << "Sorry, there's seems to be an error" << endl;
        break;
    }
    return 0;
}
