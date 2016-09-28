/***************************************************
Title: House Text Adventure
Author: Ben Lane
Date: 9/28/16
Purpose: To make a text adventure game that takes
		 place in my house.
***************************************************/

#include<iostream>
#include<iomanip>

using namespace std;

int playerChoice;

// Function prototypes.
void menu(),
	 stoop(),
 	 continueGame(),
 	 downstairsHall(),
 	 gameOver(),
 	 library(),
 	 upstairsHall(),
 	 livingRoom();

int main()
{
	menu();
	
		
	return 0;
}

void menu()
{
	int menuOption;
	
	cout << "\t\t Text Adventure at 322 " << endl << endl;
	
	cout << "\t  Select an option by entering its number. " << endl << endl;
	
	cout << "\t\t\t1.New Game " << endl;
	cout << "\t\t\t2.Continue " << endl;
	cout << "\t\t\t3.Exit " << endl;
	
	cin >> menuOption;
	

	switch(menuOption)
	{
		case 1: stoop();
		break;
		
		case 2: continueGame();
		break;
		
		case 3: main();
		break;
		
	}
	
}


void stoop()
{
	system("CLS");
	
	cout << "You are in front of a yellow house with green shutters. " << endl << endl;
	cout << "1. Go through the front door. " << endl;
	cout << "2. Walk away. " << endl;
	
	cin >> playerChoice;
	
	switch(playerChoice)
	{
		case 1: downstairsHall();
		break;
		
		case 2: gameOver();
		break;
		
		
		
	}
	
	
}


void downstairsHall()
{
	system("CLS");
	
	cout << "You enter a long hallway.  There is a door to your left and a door down the hallway.  Stairs on your right lead up. " << endl << endl;
	
	cout << "1. Go through the door on the left. " << endl;
	cout << "2. Walk down the hall and through the door. " << endl;
	cout << "3. Turn right and go up the stairs. " << endl;
	cout << "4. Go back outside. " << endl; 
	
	cin >> playerChoice;
	
	switch(playerChoice)
	{
		case 1: library();
		break;
	
		case 2: livingRoom();
		break;
		
		case 3: upstairsHall();
		break;	
		
		case 4: stoop();
		break;	
		
		
		
	}
	
}

void library()
{
	
	
	
	
}

void livingRoom()
{
	
	
	
	
}

void upstairsHall()
{
	
	
	
	
}

void continueGame()
{
	
	
	
	
}

void gameOver()
{
	
	
	
}
