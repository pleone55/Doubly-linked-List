/***********************************************************************************************
 * Program Name: validate.cpp
 * Author: Paul Leone
 * Date: 8/1/2019
 * Description: validates user input
 * **********************************************************************************************/

#include "validate.hpp"
#include <iostream>

using std::cout;
using std::cin;

void inputValidation(int &validate)
{
	bool input = false;

	while(!input){
		cin >> validate;
	
		if(cin.fail()){
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer value.\n";
		}
		else if(validate < 0 || validate > 8){
			cin.clear();
			cin.ignore();
			cout << "Please choose from the options given.\n";
		}
		else
			input = true;
	}
}

void validate(int &validate)
{
	bool input = false;

	while(!input){
		cin >> validate;

		if(cin.fail()){
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer value.\n";
		}
		else
			input = true;
	}
} 
