*******************************************************
*  Name      :  Christopher Villanueva         
*  Student ID:  109871244              
*  Class     :  CSC 2421           
*  HW#       :  5                
*  Due Date  :  March 08, 2021
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program "Dictionary" reads in a list of strings from a .txt file
another text file containing another list of strings, 
searches through the file to find the strings specified. 
It then orders the strings and prints out how many 
searches it took to find the word starting from
the front of the list, and then the back. If 
the word is not found within the list the program
will tell the user it was not found. It then prints 
out the list in reverse alphabetical order into another text file.

*******************************************************
*  Source files
*******************************************************

Name:  Source.cpp
   Main program. This program makes use of the Dictionary and DictEntry class
   while also taking initializing data and outputting the results. 

Name:  Dictonary.cpp
   Dictionary class which contains functions for searching through 
   a text file to return the number of searches and to output data
   to another text file.

Name: Dictonary.h
   Header file for Dictonary class.

Name: DictEntry.h
   Header file that essentially creates a node containing 
   words and certain functions to return their values. 
   Contains an overloaded < operator to compare strings.

   
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully in all cases. 
 
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on visual studio.



*******************************************************
*  How to build and run the program
*******************************************************

1. Build the program.

    Change to the directory that contains the file by:
    % cd [HW5] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[app]

4. Delete the obj files, executables, and core dump by
   %./make clean
