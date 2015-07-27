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

//Prints menu for user to choose from
void printMenu()
{
    cout<<"\nUsing your numberpad, choose:"<<endl;
    
    cout<<"1 for ROCK"<<endl;
    
    cout<<"2 for PAPER"<<endl;
    
    cout<<"3 for SCISSORS"<<endl;
}

//Asks users if they want to repeat the program
void printPlayAgain()
{
    cout<<"\nWould you like to play again? Type 1 for yes or 2 for no"<<endl;
}

//Pressing 1=Rock, 2=Paper, 3=Scissors
int choiceUserFunction (int choice)
{
    if (choice == 1)
    {
        cout<<"You chose: ROCK"<<endl;
    }
    
    if (choice == 2)
    {
        cout<<"You chose: PAPER"<<endl;
    }
    
    if (choice == 3)
    {
        cout<<"You chose: SCISSORS"<<endl;
    }
    
    return choice;
}

//whatever the computer randomly picked gets translated. 1=Rock, 2=Paper, 3=Scissors
int choiceComputerFunction (int choice)
{
    if (choice == 1)
    {
        cout<<"I chose: ROCK"<<endl;
    }
    
    if (choice == 2)
    {
        cout<<"I chose: PAPER"<<endl;
    }
    
    if (choice == 3)
    {
        cout<<"I chose: SCISSORS"<<endl;
    }
    
    return choice;
}

//function that determines the winner. If a(the user) = 1 (the user) = rock and b (computer)= 3  is scissors, clearly you win
int winnerFunction (int a, int b)
{
    if (a == b)
    {
        cout<<"\nOoh, looks like its a tie!"<<endl;
    }
    
    if (a == 1 && b == 3)
    {
        cout<<"\nYou win!"<<endl;
        
        
    }
    if (a == 2 && b == 1)
    {
        cout<<"\nYou win!"<<endl;
        
    }
    if (a == 3 && b == 2 )
    {
        cout<<"\nYou win!"<<endl;
        
    }
    
    if (a == 3 && b == 1)
    {
        cout<<"\nI win!"<<endl;
        
    }
    if (a == 1 && b == 2)
    {
        cout<<"\nI win!"<<endl;
    }
    if (a == 2 && b == 3)
    {
        cout<<"\nI win!"<<endl;
        
    }
    
    return 0;
}


#endif
