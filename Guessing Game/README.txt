*******************************************************
*  Name      :  Christopher Villanueva         
*  Student ID:  109871244              
*  Class     :  CSC 2421           
*  HW#       :  1                
*  Due Date  :  Jan. 30, 2021
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program "Guess" simulates a guessing game in which
the user enters the amount of guesses they want to make 
denoted by n and the range of numbers they want to choose from
denoted by m. The program then chooses n integers within the
range of 1 to m and makes the user input their guesses. 
It outputs the amount of guesses they got right, whether
or not they won, and if they would want to play again.


*******************************************************
*  Source files
*******************************************************

Name:  Source.cpp
   Main program. This program calls sub-functions to initialize data,
   check score, and to output results.

Name:  Guess.h
   Contains the definition for the Guess class  

Name: Guess.cpp
   Implements a way for the program to construct a vector of random ints
   for the player to guess against. This class provides a default constructor 
   along with functions to get the range and amount of guesses the player wants 
   to specify.  

   
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on visual studio.


*******************************************************
*  How to build and run the program
*******************************************************

1. 
       % unzip [1234HW1]

   Now you should see a directory named homework with the files:
        Source.cpp
        Guess.h
        Guess.cpp
        makefile
        README.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [HW1] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[APP]

4. Delete the obj files, executables, and core dump by
   %./make clean
