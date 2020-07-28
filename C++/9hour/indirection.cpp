#include <iostream>

using namespace std;

class Sally
{
    public: 
        Sally()
        {
            cout << "I am a constructor" << endl;
        }
        ~Sally()
        {
            cout << "I am the destructor" << endl;
        }
};

int main()
{
    Sally s;
}