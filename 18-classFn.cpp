#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int standard;
    float marks;

    Student(string name, int std, float marks)
    {
        this->name = name;
        this->standard = std;
        this->marks = marks;
    };

    bool eligibleScholarship()
    {
        if (standard > 6 && standard < 10 && marks > 85 && marks < 100)
            return true;
        return false;
    }
};

int main()
{

    Student sid("Siddhant", 8, 95);
    string isEligible = sid.eligibleScholarship() ? "Yes" : "No";
    cout << "Is Siddhant eligible for Scholarship : " << isEligible << endl;
    return 0;
}