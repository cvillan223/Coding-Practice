#include "Dictionary.h"
#include <iostream>
#include <fstream>

dictionary::dictionary()
{

}

//Search through the list starting at the beginning and return the number of times it took to iterate through the list
//until the word being searched for is found
int dictionary::searchForward(list<DictEntry>& wordList, wordType findString)
{   
    //start counter at 1
    int ctr = 1;
    //start from the beginning of the list to the end
    for (list<DictEntry>::iterator ptr = wordList.begin(); ptr != wordList.end(); ptr++)
    {
        //Retirm the counter if the word is found
        if (ptr->getWord() == findString)
            return ctr;
        //iterate counter
        ctr++;
    }
    //Return false if the word cant be found
    return -1;
}


//Search through the list starting at the end and return the number of times it took to iterate through the list
//until the word is found
int dictionary::searchBackward(std::list<DictEntry>& wordList, wordType findString)
{
    //Start ctr at 1
    int ctr = 1;

    //start from the end of the list to the beginning
    for (list<DictEntry>::reverse_iterator ptr = wordList.rbegin(); ptr != wordList.rend(); ptr++)
    {
        //Return ctr if word is found
        if (ptr->getWord() == findString)
            return ctr;
        
        //Iterate ctr
        ctr++;
    }

    //Return false if not found
    return -1;
}


//Output the list in reverse to a file
void dictionary::revPrintList(ofstream& output, list<DictEntry>& wordList)
{
    //Output the list
    for (list<DictEntry>::reverse_iterator ptr = wordList.rbegin(); ptr != wordList.rend(); ptr++)
    {
        //Print list to file
        output << ptr->getWord() << endl;
    }

}