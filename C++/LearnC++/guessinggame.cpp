#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <array>

using namespace std;

void play_game();
void print_vector(vector<int> vector);
void save_score(int count);

int main() 
{
    srand(time(NULL));
    int choice;
    do
    {
        cout << "0. Quit" << endl << "1. Play Game\n";
        cin >> choice;

        switch(choice)
        {
            case 0:
                cout << "Thanks for nothing\n";
                break;
            case 1:
                play_game();
                break;
        }
    } while(choice != 0);
}

void play_game()
{
    vector<int> guesses;
    int count = 0;

    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number: ";
    while(true)
    {
        int guess;
        cin >> guess;
        count++;

        guesses.push_back(guess);

        if(guess == random)
        {
            cout << "You win!\n";
            break;
        }
        else if(guess < random)
        {
            cout << "Too low\n";
        }
        else
        {
            cout << "Too high\n";
        }
    }

    save_score(count);
    print_vector(guesses);
}

void print_vector(vector<int> vector)
{
    for(int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << "\t";
    }
    cout << endl;
}

void save_score(int count)
{
    ifstream input("best_score.txt");

    if(!input.is_open())
    {
        cout << "Unable to read file" << endl;
        return;
    }

    int best_score;
    input >> best_score;

    ofstream output("best_score.txt");

    if(!output.is_open())
    {
        cout << "Unable to read file" << endl;
        return;
    }

    if(count < best_score)
    {
        output << count;
    }
    else
    {
        output << best_score;
    }
}