#include <iostream>

using namespace std;

class Mother
{
    public: 
        Mother()
        {
            cout << "I am the mother constructor" << endl;
        }

        ~Mother()
        {
            cout << "I am the mother deconstructor" << endl;
        }
};

class Daughter: public Mother
{
    public:
        Daughter()
        {
            cout << "I am the daughter constructor" << endl;
        }

        ~Daughter()
        {
            cout << "I am the daughter deconstructor" << endl;
        }
};

int main()
{
    Daughter d;
}