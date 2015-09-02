//
//  header.h
//  Rock_Paper_Scissors
//
//  Created by Yakov Leonov
//  Copyright (c) 2015 bruute. All rights reserved.
//

#ifndef header_h
#define header_h

#include <iostream>
using namespace std;

//prints welcome
void printWelcome()
{
    cout<<"**********************************************"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*  Welcome to the Rock Paper Scissors Game!  *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"**********************************************"<<endl;
}

//Prints ASCII
void printRock()
{
    cout<<"      _______    "<<endl;
    cout<<" ----'   ____)   "<<endl;
    cout<<"        (_____)  "<<endl;
    cout<<"        (_____)  "<<endl;
    cout<<"        (____)   "<<endl;
    cout<<" ----.__(___)    "<<endl;
}

void printPaper()
{
    cout<<"      _______        "<<endl;
    cout<<" ----'   ____)____   "<<endl;
    cout<<"            ______)  "<<endl;
    cout<<"            _______) "<<endl;
    cout<<"            _______) "<<endl;
    cout<<" ----.__________)    "<<endl;
}

void printScissors()
{
    cout<<"      _______        "<<endl;
    cout<<" ----'   ____)____   "<<endl;
    cout<<"            ______)  "<<endl;
    cout<<"        __________)  "<<endl;
    cout<<"        (____)       "<<endl;
    cout<<" ----.__(___)        "<<endl;
}

void printUserWin()
{
    cout<<"\nYou win!"<<endl;
}

void printCompWin()
{
    cout<<"\nI win!"<<endl;
}

void printTie()
{
    cout<<"\nOoh, looks like its a tie!"<<endl;
}

//Prints menu for user to choose from
void printMenu()
{
    cout<<"\nUsing your numberpad, enter"<<endl;
    
    cout<<"1 for ROCK"<<endl;
    
    cout<<"2 for PAPER"<<endl;
    
    cout<<"3 for SCISSORS"<<endl;
}

//Asks users if they want to repeat the program
void printPlayAgain()
{
    cout<<"\nWould you like to play again? Enter 1 for yes or enter any key to exit"<<endl;
}

//Pressing 1=Rock, 2=Paper, 3=Scissors
int choiceUserFunction (int choice)
{
    if (choice == 1)
    {
        cout<<"You chose: ROCK"<<endl;
        printRock();
        
    }
    
    if (choice == 2)
    {
        cout<<"You chose: PAPER"<<endl;
        printPaper();
        
    }
    
    if (choice == 3)
    {
        cout<<"You chose: SCISSORS"<<endl;
        printScissors();
    }
    
    return choice;
}

//whatever the computer randomly picked gets translated. 1=Rock, 2=Paper, 3=Scissors
int choiceComputerFunction (int choice)
{
    if (choice == 1)
    {
        cout<<"I chose: ROCK"<<endl;
        printRock();
    }
    
    if (choice == 2)
    {
        cout<<"I chose: PAPER"<<endl;
        printPaper();
    }
    
    if (choice == 3)
    {
        cout<<"I chose: SCISSORS"<<endl;
        printScissors();
    }
    
    return choice;
}

//function that determines the winner. If a(the user) = 1 (the user) = rock and b (computer)= 3  is scissors, clearly you win
int winnerFunction (int a, int b)
{
    if (a == b)
    {
        printTie();
    }
    
    if (a == 1 && b == 3)
    {
        printUserWin();
    }
    if (a == 2 && b == 1)
    {
        printUserWin();
        
    }
    if (a == 3 && b == 2 )
    {
        printUserWin();
        
    }
    
    if (a == 3 && b == 1)
    {
        printCompWin();
        
    }
    if (a == 1 && b == 2)
    {
        printCompWin();
    }
    if (a == 2 && b == 3)
    {
        printCompWin();
        
    }
    
    return 0;
}




#endif
