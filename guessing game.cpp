//
//  guessing game.cpp
//  game
//
//  Created by Jatin Singh Tomar on 01/04/22.
//

//This is a single player casino game, only for fun

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

void rules();
int main()
{
    string PlayerName;
    int balance;    // stores player balance
    int bettingAmount;
    int dice;   // stores random number
    int guess;
    char choice;
    srand(time(0));  //
    cout<<"\n\n\t\t======WELCOME TO CASINO WORLD======"<<endl;
    cout<<"Enter your name : ";
    getline(cin,PlayerName);
    cout<<"Enter the starting balance to play game : $";
    cin>>balance;
    do{
        rules();
        do{
            
        }
    }
    
    
    
    
    
    
    
    return 0;
}
