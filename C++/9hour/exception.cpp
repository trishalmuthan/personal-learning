#include <iostream>

using namespace std;

int main()
{
    try
    {
        int num1, num2;
        cout << "Enter first number: " << endl;
        cin >> num1;

        cout << "Enter first number: " << endl;
        cin >> num2;

        if(num2 == 0)
        {
            throw 0;
        }

        cout << num1/num2 << endl;
    }
    catch(...)
    {
        cerr << "You can't divide by 0" << endl;
    }
    
}