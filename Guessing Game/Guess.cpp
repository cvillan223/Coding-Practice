#include "Guess.h"

vector<int> Guess::RandomGuess(int n, int m)
{
    //Var to store the computers guesses
    vector<int> GuessArr;

    //Var for rand number
    int j;

    //For loop to fill the vector with as many random integers as needed
    for (int i = 0; i < n; i++)
    {
       //Bound j to a random number between 1 and m
       j = rand() % m + 1;
       GuessArr.push_back(j);
    }
    
    //Return vector
    return GuessArr;
}

int Guess::GetRange()
{
    //Var for range
    int m;

    //Get range
    cout << "Enter the range of numbers you would like to guess from: " << endl;
    cin >> m;

    //Return range
    return m;
}

int Guess::GetGuesses()
{
    //Var for number of guesses 
    int n;

    //Get number of guesses
    cout << "Enter the amount of guesses you would want to make: " << endl;
    cin >> n;

    //Return number of guesses
    return n;
}
