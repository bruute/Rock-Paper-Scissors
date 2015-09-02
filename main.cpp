//
//  main.cpp
//  Rock_Paper_Scissors
//
//  Created by Yakov Leonov
//  Copyright (c) 2015 bruute. All rights reserved.
//

#include <iostream>
#include <unistd.h>
#include "header.h"
using namespace std;

int main() {
    
    //initialize variables
    int userChoice;
    int compChoice;
    int answer;
    
    //welcome
    printWelcome();
    
    sleep(2);
    
    do {
        printMenu();
        
        cin>>userChoice;
        
        choiceUserFunction (userChoice);
        
        sleep(1);
        
        cout<<"\nMy turn!"<<endl<<endl;
        
        //waits 2 seconds
        sleep(1);
        
        srand(time(NULL));
        
        compChoice = (rand() % 3) + 1;
        
        choiceComputerFunction (compChoice);
        
        winnerFunction(userChoice, compChoice);
        
        printPlayAgain();
        
        cin>>answer;
        
    } while (answer == 1);
    
    //prints if user presses any number but 1
    cout<<"\nBye!"<<endl;
    
    return 0;
}

