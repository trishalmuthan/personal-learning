#include <iostream>

using namespace std;

class Sally
{
    public:
        int num;
        Sally()
        {

        }
        Sally(int x)
        {
            num = x;
        }

        Sally operator+(Sally s)
        {
            Sally brandnew;
            brandnew.num = num + s.num;
            return brandnew;
        }
};

int main()
{
    Sally a(34);
    Sally b(66);
    Sally c;

    c = a+b;
    cout << c.num << endl;

}