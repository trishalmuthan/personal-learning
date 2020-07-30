#include <iostream>

using namespace std;

class Birthday
{
    public:
        Birthday(int m, int d, int y)
        {
            month = m;
            day = d;
            year = y;
        }

        void printDate()
        {
            cout << month << '/' << day << '/' << year << endl;
        }
    private:
        int month;
        int day;
        int year;
};

class Person
{
    public:
        Person(string x, Birthday bo)
        : name(x), dateOfBirth(bo)
        {
        }

        void printInfo()
        {
            cout << name << " was born on ";
            dateOfBirth.printDate();
        }
    private:
        string name;
        Birthday dateOfBirth;
};

int main()
{
    Birthday birthObj(12, 28, 1986);
    Person trishal("Trishal", birthObj);
    trishal.printInfo();
}