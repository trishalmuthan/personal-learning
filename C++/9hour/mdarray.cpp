#include <iostream>

using namespace std;

int main()
{
    int sally[2][3] = {{4, 5, 6}, {7, 8, 9}};
    
    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << sally[row][col] << " ";
        }
        cout << endl;
    }

}