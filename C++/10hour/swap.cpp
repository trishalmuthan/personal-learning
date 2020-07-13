#include <iostream>
#include <string>

using namespace std;

template <class T>
void swapitems(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
void swapitems(T a[], T b[], int size)
{
    for(int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int a = 10;
    int b = 20;
    swapitems(a, b);
    cout << "a: " << a << " b: " << b << endl;

    string name = "Caleb";
    string lname = "Curry";
    swapitems(name, lname);
    cout << "a: " << name << " b: " << lname << endl;

    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};

    for(int i = 0; i < 6; i++)
    {
        cout << nines[i] << " " << ones[i] << "\t";
    }
    swapitems(nines, ones, 6);
    
    cout << endl;

    for(int i = 0; i < 6; i++)
    {
        cout << nines[i] << " " << ones[i] << "\t";
    }
    cout << endl;
}
