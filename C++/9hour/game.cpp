#include <iostream>
#include <fstream>

using namespace std;

int getChoice();
void displayItems(int);

int main()
{
    int choice;

    choice = getChoice();

    while(choice != 4)
    {
        switch(choice)
        {
            case 1:
                displayItems(1);
                break;
            case 2:
                displayItems(2);
                break;
            case 3:
                displayItems(3);
                break;
        }
        choice = getChoice();
    }
}

int getChoice()
{
    int choice;

    cout << "1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - Quit program" << endl;

    cin >> choice;
    return choice;

}

void displayItems(int choice)
{
    ifstream objectFile("objects.txt");
    string name;
    int power;

    if(choice == 1)
    {
        while(objectFile >> name >> power)
        {
            if(power == 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }

    else if(choice == 2)
    {
        while(objectFile >> name >> power)
        {
            if(power > 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }

    else
    {
        while(objectFile >> name >> power)
        {
            if(power < 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }

}
