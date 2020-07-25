#include <iostream>

using namespace std;

int main()
{
    int age;
    int ageTotal = 0;
    int numberOfPeople = 0;
    cout << "Enter first persons age or -1 to quit" << endl;
    cin >> age;

    while(age != -1)
    {
        ageTotal += age;
        numberOfPeople++;
        cout << "Enter next persons age or -1 to quit" << endl;
        cin >> age;
    }

    cout << "Number of people: " << numberOfPeople << endl;
    cout << (float)ageTotal/numberOfPeople << endl;

    return 0;
}