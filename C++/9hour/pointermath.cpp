#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int *bp0 = &arr[0];
    int *bp1 = &arr[1];
    int *bp2 = &arr[2];
    int *bp3 = &arr[3];
    int *bp4 = &arr[4];

    cout << bp0 << endl;
    cout << bp1 << endl;
    cout << bp2 << endl;
    cout << bp3 << endl;
    cout << bp4 << endl;
}