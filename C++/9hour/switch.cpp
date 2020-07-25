#include <iostream>

using namespace std;

int main()
{
    int age = 21;
    switch(age)
    {
        case 16:
            cout << "You can drive!" << endl;
            break;
        case 18:
            cout << "You can buy stuff!" << endl;
            break;
        case 21:
            cout << "You can drink!" << endl;
            break;
        default:
            cout << "You are boring" << endl;
            break;
    }
    return 0;
}