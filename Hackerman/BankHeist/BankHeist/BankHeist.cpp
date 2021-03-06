// BankHeist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // the in and the out stream 
#include <cstdlib> // this is where we get the random number generator from
#include <ctime> // we use this for the seeding of the random number geneator

using namespace std;
void Account(); // declares the function
int Swap(); // declares the function
void badSwap(int x, int y); 
void goodSwap(int& x, int& y);

int Options = 0; // allows for the player to call options

int main() // main function
{
	Account(); // calls the function account
	system("pause"); // pauses so the player can read the final text

	return 0;
}

void Account() // account function
{
	cout << "Would you like to transfer money, add money, withdraw, or view accounts" << endl; // output text
	cout << "1 to transfer, 2 to add, 3 to withdraw, 4 to view accounts" << endl; // info for the player
	cin >> Options; // player input
	if (Options == 1) // checks to see what the player input
	{
		cout << "Sorry this option is broken" << endl; // output info
	}
	if (Options == 2) // checks to see what the player input
	{
		cout << "Sorry this option is broken" << endl; // output info
	}
	if (Options == 3) // checks to see what the player input
	{
		cout << "Sorry this option is broken" << endl; // output info
	}
	if (Options == 4) // checks to see what the player input
	{
		Swap(); // calls the swap function
	}
	else // if non of the numbers are clicked it goes to this one
	{
		Account(); // calls the account function to run again until they input a correct number
	}

	return;
}

// this is the text from the book to help me with the program I changed it to fit the assigment

int Swap() // this handles all of the swapping info
{
	srand(static_cast<unsigned int>(time(0))); //seed random number generator
	int RandomDebit = rand(); // tells it to grab a random number
	int RandomSavingings = rand(); // tells it to grab a random number

	int Debit = (RandomDebit % 500) + 1; // Random number between 1 and 500
	int Savings = (RandomSavingings % 2000) + 1; // Random number between 1 and 2000

	cout << "   Accounts Balances" << endl;
	cout << "***********************" << endl;
	cout << "Debit Account Balance: $" << Debit << endl; // output origial debit amount
	cout << "Savings Account Balance: $" << Savings << endl; // output origial savings amount
	cout << "Sorry something went wrong just a sec" << endl; 
	badSwap(Debit, Savings); // keeps the account the same 
	system("pause");
	cout << "Debit Account Balance: $" << Debit << endl; // output origial debit amount
	cout << "Savings Account Balance: $" << Savings << endl; // output origial savings amount
	cout << "Sorry something went wrong just a sec" << endl;
	goodSwap(Debit, Savings); // switches the account numbers to show the hacked versions
	cout << "Debit Account Balance: $" << Debit << endl; // hacked debit
	cout << "Savings Account Balance: $" << Savings << endl; // hacked saving
	return 0;
}

void badSwap(int x, int y) // the varaibles are passed into x and y
{
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int& x, int& y) // Switches the x and y values so the account appears to be hacked
{
	int temp = x;
	x = y;
	y = temp;
}

