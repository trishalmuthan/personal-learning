#include <iostream>

using namespace std;

int addNumbers(int, int, int, int);

int main()
{
    int answer = addNumbers(20, 20, 20, 20);
    cout << answer << endl;
}

int addNumbers(int x, int y, int z, int w)
{
    return x+y+z+w;
}