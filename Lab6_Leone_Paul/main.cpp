/************************************************************************************************
 * Program Name: main.cpp
 * Author: Paul Leone
 * Date: 8/1/2019
 * Description: This is the main file to run the program
 * **********************************************************************************************/

#include "node.hpp"
#include "doubly.hpp"
#include "menu.hpp"
#include "validate.hpp"

#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int val;
	int choice;

	//create object for doubly class
	Doubly list;

	do{
		//display the menu
		displayMenu();
		inputValidation(choice);
		cout << "\n";

		switch(choice)
		{
			case 1:
			{
				cout << "Enter a number: ";
				validate(val);
				list.addHead(val);
				break;
			}
			case 2:
			{
				cout << "Enter a number: ";
				validate(val);
				list.addTail(val);
				break;
			}
			case 3:
			{
				list.deleteHead();
				break;
			}
			case 4:
			{
				list.deleteTail();
				break;
			}
			case 5:
			{
				list.reverse();
				break;
			}
			case 6:
			{
				list.displayHead();
				break;
			}
			case 7:
			{
				list.displayTail();
				break;
			}
			case 8:
			{
				cout << "Program Quit\n";
				choice = 8;
				break;
			}
			default:
			{
				break;
			}
		}
		cout << "\n";

	}while(choice != 8);

	return 0;
}
