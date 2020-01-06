/*********************************************************************************************
 * Program Name: menu.cpp
 * Author: Paul Leone
 * Date: 8/1/2019
 * Description: Menu function that displays the menu options for the user
 * *******************************************************************************************/

#include "menu.hpp"
#include "validate.hpp"
#include <iostream>

using std::cout;
using std::cin;

void displayMenu()
{
	cout << "\n--Doubly-Linked List--\n";
	cout << "1. Add a node to the beginning of the list\n";
	cout << "2. Add a node to the end of the list\n";
	cout << "3. Remove a node from the beginning of the list\n";
	cout << "4. Remove a node from the end of the list\n";
	cout << "5. Print the list in reverse\n";
	cout << "6. Print the value at the head\n";
	cout << "7. Print the value at the tail\n";
	cout << "8. Exit Program\n";
	cout << "\n";
	cout << "Enter your choice: ";
}
