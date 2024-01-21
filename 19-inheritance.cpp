#include <iostream>

using namespace std;

class Person
{
public:
    void sayYay() { cout << "Yayy!!" << endl; }
};

class IndianPerson : public Person
{
public:
    string name;
    int age;

    void greet(string name)
    {
        cout << name << " says namaste!!" << endl;
    }

    IndianPerson(string name, int age)
    {
        this->name = name;
        this->age = age;
        sayYay();
        greet(name);
    }
};

int main()
{
    IndianPerson sid("Siddhant", 21);
    return 0;
}