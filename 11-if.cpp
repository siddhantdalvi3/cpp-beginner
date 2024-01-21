#include <iostream>

using namespace std;

int main()
{
    string ans;
    cout << "Enter your gender (M/F) : ";
    cin >> ans;
    if (ans.empty())
    {
        cout << "You need to type something and hit enter" << endl;
    }
    else if (ans == "M")
    {
        cout << "Dude those biceps are strong" << endl;
    }
    else if (ans == "F")
    {
        cout << "Wow, you don't need makeup i guess" << endl;
    }
    else
    {
        cout << "Sorry, there's nothing left for others" << endl;
    }

    return 0;
}
