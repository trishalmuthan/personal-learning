#include <iostream>

using namespace std;

template <class FIRST, class SECOND>
FIRST smaller(FIRST a, SECOND b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}

int main()
{
    int x = 89;
    double y = 56.39;
    cout << smaller(x, y) << endl;
}