#include <iostream>

using namespace std;

template <class T>
class Spunky
{
    public:
        Spunky(T x)
        {
            cout << x << " is not a character." << endl;
        }
};

template<>
class Spunky<char>
{
    public:
        Spunky(char x)
        {
            cout << x << " is indeed a character." << endl;
        }
};

int main()
{
   Spunky<int> s1(3);
   Spunky<double> s2(4.63);
   Spunky<char> s3('a');
}