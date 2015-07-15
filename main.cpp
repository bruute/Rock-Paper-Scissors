//
//  main.cpp
//  Rock_Paper_Scissors
//
//  Created by Yakov Leonov on 7/15/15.
//  Copyright (c) 2015 bruute. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    
    int rock=1;
    int paper=2;
    int scissors=3;
    int userChoice;
    int compChoice;
    
    int userWins=0;
    int compWins=0;
    int answer;

    cout<<"Welcome to the rock paper & scissors game!"<<endl<<endl;
   
    do {
        cout<<"\nUsing your numberpad, choose:"<<endl;
        cout<<"1 for rock"<<endl;
        cout<<"2 for paper"<<endl;
        cout<<"3 for scissors"<<endl;
    
        cin>>userChoice;
    
        if (userChoice == 1)
        {
            cout<<"Okay you chose: rock"<<endl;
        }
    
        if (userChoice == 2)
        {
            cout<<"Okay you chose: paper"<<endl;
        }

        if (userChoice == 3)
        {
            cout<<"Okay you chose: scissors"<<endl;
        }

        cout<<"My turn!"<<endl<<endl;
    
        srand(time(NULL));
        
        int compChoice = (rand() % 3) + 1;
    
        if (compChoice == 1)
        {
            cout<<"I chose: rock"<<endl;
        }
        
        if (compChoice == 2)
        {
            cout<<"I chose: paper"<<endl;
        }
    
        if (compChoice == 3)
        {
            cout<<"I chose: scissors"<<endl;
        }
    
    
        if (userChoice == compChoice)
        {
            cout<<"ooh, looks like its a tie"<<endl;
        }
    
        if (userChoice == 1 && compChoice == 3)
        {
            cout<<"You win!"<<endl;
            userWins++;
        
        }
        if (userChoice == 2 && compChoice == 1)
        {
            cout<<"You win!"<<endl;
            userWins++;
        }
        if (userChoice == 3 && compChoice == 2 )
            {
        cout<<"You win!"<<endl;
                userWins++;
            }
    
        if (userChoice == 3 && compChoice == 1)
        {
            cout<<"I win!"<<endl;
            compWins++;
        }
        if (userChoice == 1 && compChoice == 2)
        {
            cout<<"I win!"<<endl;
            compWins++;
        }
        if (userChoice == 2 && compChoice == 3)
        {
            cout<<"I win!"<<endl;
            compWins++;
        }
    
        cout<<"\nYou won: "<<userWins<<" times.\nI won: "<<compWins<<" times."<<endl;
        cout<<"\nWould you like to play again? Type 1 for yes or 2 for no"<<endl;
        cin>>answer;
   
    } while (answer == 1);
    
    cout<<"\nBye!"<<endl;
    
    return 0;
}
