#include <iostream>

using namespace std;

void printArray(int theArray[], int size);

int main()
{
    int bucky[3] = {20, 54, 675};
    int jessica[6] = {20, 54, 675, 99, 81, 34};
    printArray(bucky, 3);
    printArray(jessica, 6);

}

void printArray(int theArray[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << theArray[i] << " ";
    }
    cout << endl;
}