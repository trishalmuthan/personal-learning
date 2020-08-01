#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    string s1("Hi, my name is Trishal and I like basketball!");
    cout << s1 << endl;
    s1.insert(34, "football and ");
    cout << s1 << endl;
}
