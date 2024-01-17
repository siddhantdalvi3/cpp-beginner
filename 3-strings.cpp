#include <iostream>

using namespace std;

int main()
{

    cout << "Hello\n";
    cout << "This is a nice program" << endl;

    string sentence = "This is a sentence";

    cout << sentence << endl;

    // get length of the string
    cout << sentence.length() << endl;

    // access individual character
    cout << sentence[10] << endl;

    // modify individual character
    sentence[10] = 'B';
    cout << sentence << endl;

    // check if a substring is present - returns its index
    cout << "String is present " << sentence.find("is") << endl;
    cout << "String is not present " << sentence.find("isasasadsds") << endl;

    // get substring
    cout << sentence.substr(0, 3) << endl;
    cout << sentence.substr(4, 5) << endl;

    string newSubString;
    newSubString = sentence.substr(10, sentence.length() - 1);
    cout << newSubString << endl;

    return 0;
}