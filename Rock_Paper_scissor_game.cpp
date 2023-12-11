//Author :- Code With Vishal
//Program Published :- 12-11-23 IST
//Youtube :- Code With Vishal

#include <stdio.h>
#include <iostream>
#include <ctime>

int computerchoice(int res);

int main() {

    char PlayerChoice;
    int resok;

     std::cout << "**********************************\n";
     std::cout << "Welcome to Rock,Paper,Scissor Game\n";
     std::cout << "**********************************\n";
     std::cout << "(1) r for Rock!\n(2) p for Paper!\n(3) s for Scissor!\n\n";
    do{
        std::cout << "Enter Your Choice : ";
        std::cin >> PlayerChoice;
        std::cin.clear();
        fflush(stdin);

        switch(PlayerChoice){
            case 'r': std::cout << "\n" << "Your Choice is Rock!" << "\n\n";
                        break;
            case 'p': std::cout << "\n" << "Your Choice is Paper!" << "\n\n";
                        break;
            case 's': std::cout << "\n" << "Your Choice is Scissor!" << "\n\n";
                        break;
            default: std::cout << "\n" << "You have entered Invalid Choice!\n\n";
        }
    } while(PlayerChoice != 'r' && PlayerChoice != 'p' && PlayerChoice != 's');

    int CompDecision = computerchoice(resok);

    if(CompDecision == 1){
         std::cout << "Computer Choice is Rock!" << "\n\n";
    } else if(CompDecision == 2){
         std::cout << "Computer Choice is Paper!" << "\n\n";
    } if(CompDecision == 3){
         std::cout << "Computer Choice is Scissor!" << "\n\n";
    }

    if(PlayerChoice == 'r'){
        if(CompDecision == 1){
            std::cout << "Match is tie!" << "\n\n";
        } else  if(CompDecision == 2){
            std::cout << "You Loose!" << "\n\n";
        } else  if(CompDecision == 3){
            std::cout << "You Win!" << "\n\n";
        }

    } else  if(PlayerChoice == 'p'){
         if(CompDecision == 1){
            std::cout << "You Win!" << "\n\n";
        } else  if(CompDecision == 2){
            std::cout << "Match is tie!" << "\n\n";
        } else  if(CompDecision == 3){
            std::cout << "You Loose!" << "\n\n";
        }

    } else  if(PlayerChoice == 's'){
         if(CompDecision == 1){
            std::cout << "You Loose!" << "\n\n";
        } else  if(CompDecision == 2){
            std::cout << "You Win!" << "\n\n";
        } else  if(CompDecision == 3){
            std::cout << "Match is tie!" << "\n\n";
        }

    }

    return 0;
}

int computerchoice(int res){
    srand(time(0));
    res = rand() % 3 + 1;
    return res;
}