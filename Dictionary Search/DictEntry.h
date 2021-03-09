#ifndef DICTENTRY_
#define DICTENTRY_
using namespace std;

//type def to take in string called wordType
typedef string wordType;

//DictEntrty class
class DictEntry
{
    //Set protected variables
protected:
    wordType word;
    wordType definition;

    //Set public functions
public:
    
    //Return word
    wordType getWord() 
    { 
        return word; 
    }

    //Set word
    void setWord(wordType _word) 
    { 
        word = _word; 
    }

    //Return word def
    wordType getDef() 
    {
        return definition; 
    }

    //Set word def
    void setDef(wordType _def)
    { 
        definition = _def; 
    }

    //Overload < operator without changing data entered
    bool operator < (const DictEntry& entry) const 
    {
        //Compare string entered vs string set
        return (word < entry.word);
    }

};

#endif