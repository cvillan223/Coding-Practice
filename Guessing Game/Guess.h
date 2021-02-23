#pragma once
#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

class Guess
{
public:

	//Default const.
	Guess()
	{

	}

	//Function to return vector filled with n random numbers ranging from 1 to m
	vector<int> RandomGuess(int n, int m);
	
	//Gets m
	int GetRange();

	//Gets n
	int GetGuesses();

};