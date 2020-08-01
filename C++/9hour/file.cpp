#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream buckyFile("");

    if(buckyFile.is_open())
    {
        cout << "The file is open!" << endl;
    }
    else
    {
        cout << "The file isn't open :(" << endl;
    }
    buckyFile << "I am cool!\n";
    buckyFile.close();
}