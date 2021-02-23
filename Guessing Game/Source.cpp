#include <iostream>
#include <time.h>
#include <algorithm>
#include<string>
#include "Guess.h"
using namespace std;


int GetScore(vector<int> Cpu, vector<int> Player, int n)
{
	//Variable to keep score
	int score = 0;
	vector<int> Matches;

	//Iterate through both vectors using two for loops
	for (int i = 0; i < n; i++)
	{
		/*
		* if a match is found place the matching
		* integer inside a vector and replace
		* the player's index with 0
		* and the cpu index with -1 so a user
		* can't just enter the same matching number over and over
		*/
		for (int j = 0; j < n; j++)
		{
			if (Player[i] == Cpu[j])
			{
				Matches.push_back(Player[i]);
				Player[i] = 0;
				Cpu[j] = -1;
			}
		}
		
	}
	

	cout << endl;
	score = Matches.size();

	//return the score
	return score;
	
}


vector<int> PlayerGuess(int n, int m)
{
	//Variables to keep track of the players input
	int Input;
	vector<int> Player;

	cout << "Enter your guesses for the " << n << " integers in the range from 1 to " << m << endl;

	//Runs while there's still input and the amount of inputs is not equal to n
	while (cin >> Input)
	{

		Player.push_back(Input);

		//Once the players input size has reached n return the vector
		if (Player.size() == n)
		{
			return Player;
		}

	}
}

bool CheckWin(int score, int n)
{

	bool Win = false;

	//If the amount of guesses the player gets is equal to the number of guesses made by the cpu
	//do this
	if (score == n)
	{
		//Change won to true
		Win = true;
	}

	//if the user hasn't won
	else
	{
		//Show the amount of guesses the player got right
		cout << score << " of your guesses are right try again." << endl;
		cout << endl;

		//Reset the score
		score = 0;
	}

	return Win;
}

bool Replay()
{
	//Vars to keep track if the player wants to go again
	bool Win = false;
	string Replay;

	//Get input
	cout << "You win! Would you like to play again? Type Yes or No." << endl;
	cin >> Replay;

	//If the player wants to go again return false
	if (Replay == "Yes")
	{
		return Win;
	}

	//If the player doesn't want to go again exit the program
	if (Replay == "No")
	{
		cout << "Goodbye!";
		exit(0);
	}

	//If the input is anything else make them retype it
	else
	{
		cout << "Invalid entry type Yes or No: " << endl;
		cin >> Replay;
	}
}

int main()
{
	//Rand Var to create rand guesses each time
	srand(time(NULL));
	
	//Variables to keep track if the user won or wants to play again
	bool Win = false;
	string PlayAgain;
	
	//Variable to keep track of how many guesses the user wants to make and the range from 1 to m
	int n, m;

	//Creates Guess class
	Guess CpuGuess;

	//Initialize n and m
	n = CpuGuess.GetGuesses();
	m = CpuGuess.GetRange();

	//Create the random guesses and store it in a vector
	vector<int> CpuGuesses = CpuGuess.RandomGuess(n, m);

	//While the user hasn't won 
	while (!Win)
	{
		
		//Make the player guess
		vector<int> Player = PlayerGuess(n, m);

		//Get how many guesses the player got right
		int score = GetScore(CpuGuesses, Player, n);
		
		//Update win
		Win = CheckWin(score, n);


		//If the user wins 
		if (Win)
		{
			//Check if they want to play again
			Win = Replay();

			//If they do get new input and values for n, m, and the computer guess
			if (!Win)
			{
				n = CpuGuess.GetGuesses();
				m = CpuGuess.GetRange();
				CpuGuesses = CpuGuess.RandomGuess(n, m);
			}
		}
		
	}

}

