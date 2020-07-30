#include <iostream>

using namespace std;

class Sally
{
    public:
        Sally(int a, int b)
        : regVar(a), constVar(b)
        {
        }

        void print()
        {
            cout << "regvar: " << regVar << "const: " << constVar << endl;
        }
    private:
        int regVar;
        const int constVar;
};

int main()
{
    Sally s(3, 87);
    s.print();


}