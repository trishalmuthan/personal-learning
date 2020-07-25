#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int total = 0;
    int number;
    while(x <= 5)
    {
        cin >> number;
        total += number;
        x++;
    }
    cout << total << endl;
    return 0;
}