#include <fstream>
#include <iostream>
#include "DictEntry.h"
#include "Dictionary.h"

using namespace std;

int main()
{
    //Variables to take in data
    string Line;
    DictEntry Dict;

    ifstream WordFile;
    WordFile.open("dictionary.txt");

    //read file into list
    list<DictEntry> WordList;
       
    //Take in data
    while (!WordFile.eof())
    {
        WordFile >> Line;
        Dict.setWord(Line);
        WordList.push_front(Dict);
    }

    //Close file
    WordFile.close();

    //Sort the list alphabetically
    WordList.sort();

    //Create a doubly linked list
    list<DictEntry> findWords;

    //Open the file containing the words being searched for
    WordFile.open("findwords.txt");

    //Read in data
    while (!WordFile.eof())
    {
        //Set data
        WordFile >> Line;
        Dict.setWord(Line);

        //Add searched words to list
        findWords.push_back(Dict);
    }

    //Close file
    WordFile.close();

    //Create dictionary object
    dictionary dict;

    //for loop to iterate through the entire list using a node as a pointer
    for (list<DictEntry>::iterator dictPtr = findWords.begin(); dictPtr != findWords.end(); dictPtr++)
    {
        if (dict.searchForward(WordList, dictPtr->getWord()) == -1 || dict.searchBackward(WordList, dictPtr->getWord()) == -1)
        {
            cout << dictPtr->getWord() << " Not found" << endl;
            cout << endl;
        }
        else
        {
            cout << dictPtr->getWord() << " found in ";
            cout << dict.searchForward(WordList, dictPtr->getWord()) << " forward checks. " << endl;
            cout << dictPtr->getWord() << " found in ";
            cout << dict.searchBackward(WordList, dictPtr->getWord()) << " backward checks. " << endl;
            cout << endl;
        }
        
    }

    //Print list to file
    ofstream WriteFile;
    WriteFile.open("revsorted.txt");

    dict.revPrintList(WriteFile, WordList);

    WriteFile.close();
}