// Menu_using_Pointers.cpp : Defines the entry point for the console application.
//This is an example of a menu for a small food truck

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string str1 = "pizza";//creating strings for my menu options
string str2 = "fries";
string str3 = "cheesecake";
string choice;//creating a string for a future variable
float price1 = 9.99;//float variables for my prices
float price2 = 4.50;
float price3 = 3.50;


string order();//string returning function 
void bill(float * pPrice1, float * pPrice2, float * pPrice3);//i didnt know you had to put in the arguments when declaring a function
int main()//main function
{
	cout << "Welcome to Roberto's Food Truck!\n";
	cout << "I hope you enjoy our classic cuisine.\n";
	cout << "Please take a look at our menu.\n\n";
	
	float *pPrice1 = 0;//initializing a float pointer 
	pPrice1 = &price1;//assigning pointer to reference of price1
	float*pPrice2 = 0;//initializing a float pointer 
	pPrice2 = &price2;//assgining pointer to reference of price2
	float *pPrice3 = 0;//initializing a float pointer 
	pPrice3 = &price3;//assianging pointer to reference of price3
	
	order();//order function
	bill(&price1, &price2, &price3);//i dont understand why you put in the referenced variable instead of the pointer as arguments

	system("pause");
    return 0;
}

string order()
{
	string *pChoice = 0;//declare a pointer
	pChoice = &choice;//assign pointer address of my variable "choice"

	cout << "what would you like to eat? We have pizza, fries & cheesecake\n";
	cin >> choice;//user input

	if (choice == str1)//if user input is pizza (str1 variable)....
	{
		cout << "Great choice!\n";// then print this
	}
	else if (choice == str2)//if user input is fries (str2 variable)....
	{
		cout << "Would you those loaded?\n";
	}
	else if (choice == str3)//if user input is cheesecake (str3 variable)....
	{
		cout << "Really? Dessert already?\n";
	}
	return *pChoice;
}


void bill(float *pPrice1, float *pPrice2, float *pPrice3)// function passing pointers as arguments
{
	if (choice == str1)
	{
		cout << "That will be $" << *pPrice1<< "\n";//inputting price variable via dereferencing pointer 
	}
	if (choice == str2)
	{
		cout << "That will be $" << *pPrice2 << "\n";//inputting price variable via dereferencing pointer
	}
	if (choice == str3)
	{
		cout << "That will be $" << *pPrice3<< "\n";//inputting price variable via dereferencing pointer
	}
}
