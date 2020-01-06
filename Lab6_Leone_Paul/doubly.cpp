/*******************************************************************************************
 * Program Name: doubly.cpp
 * Author: Paul Leone
 * Date: 8/1/2019
 * Description: Doubly class that implements the vsrious functions to add, remove and 
 * 		display the list
 *******************************************************************************************/

#include "doubly.hpp"
#include <iostream>

using std::cout;
using std::cin;

/*******************************************************************************
 * Constructor that sets the head and tail pointer to null
 * *****************************************************************************/

Doubly::Doubly()
{
	head = nullptr;
	tail = nullptr;
}

/*******************************************************************************
 * Destructor
 * *****************************************************************************/

Doubly::~Doubly()
{
	Node* nodeptr = head;

	//while there are no empty nodes
	while(nodeptr != nullptr){
		Node *temp = nodeptr;
		nodeptr = nodeptr->getNext();
		delete temp;
	}
}

/*******************************************************************************
 * Function that adds a new node to the head of the list
 * *****************************************************************************/
void Doubly::addHead(int number)
{

	//if the list is empty
	if(head == nullptr){
		head = new Node(number);
		tail = head;
	}
	else{
		Node *nodeptr = head;

		while(nodeptr->getPrev() != nullptr){
			//keep moving until the head is reached
			nodeptr = nodeptr->getPrev();
		}

		//if there is more than 1 element in the list
		//push new node before current node
		nodeptr->setPrev(new Node(number));

		//set head pointer to the new node
		head = nodeptr->getPrev();

		//set next pointer to the original node
		head->setNext(nodeptr);
	}

	//Call function 6
	traverse();
}

/*************************************************************************************
 * Function adds a new node to the tail of the list
 * ***********************************************************************************/

void Doubly::addTail(int number)
{
	//if the list is empty
	if(head == nullptr){
		head = new Node(number);
		tail = head;
	}
	else{
		//move through the list
		Node *nodeptr = head;

		while(nodeptr->getNext() != nullptr){
			nodeptr = nodeptr->getNext();
		}

		nodeptr->setNext(new Node(number));
		tail = nodeptr->getNext();
		tail->setPrev(nodeptr);
	}

	//display the list
	traverse();
}

/*****************************************************************************************
 * Function removes a node from the head of the list
 * ***************************************************************************************/

void Doubly::deleteHead()
{
	//if the list is empty
	if(head == nullptr){
		cout << "List is empty.\n";
	}
	//if there is only one element
	else if(head->getNext() == nullptr){
		Node *temp;
		temp = head;
		head = nullptr;
		delete temp;
	}
	else{
		Node *temp;
		temp = head;
		//move head pointer to next node
		head = head->getNext();
		//set current head to null
		head->setPrev(nullptr);
		//delete temp
		delete temp;
		//display the list
		traverse();
	}
}

/*************************************************************************************
 * Function remeoves a node from the tail of the list
 * ***********************************************************************************/

void Doubly::deleteTail()
{
	//if the list is empty
	if(head == nullptr){
		cout << "List is empty.\n";
	}
	//if there is only one element in the list
	else if(head->getNext() == nullptr){
		Node *temp;
		temp = head;
		head = nullptr;
		delete temp;
	}
	else{
		Node *temp;
		temp = tail;
		//Move tail pointer to previous node
		tail = tail->getPrev();
		//set current tail to null
		tail->setNext(nullptr);
		delete temp;

		//display the list
		traverse();
	}
}

/*************************************************************************************
 * Function returns the current value of the node the head is pointing to
 * ***********************************************************************************/

void Doubly::displayHead()
{
	//if the list is empty
	if(head == nullptr){
		cout << "List is empty.\n";
	}
	else{
		cout << "The value at the head of the node is: " << head->getVal() << "\n";
	}
}

/***************************************************************************************
 * Function returns the current value of the node the tail is pointing to
 * *************************************************************************************/

void Doubly::displayTail()
{
	//if the list if empty
	if(head == nullptr){
		cout << "List is empty.\n";
	}
	else{
		cout << "The value at the tail of the node is: " << tail->getVal() << "\n";
	}
}

/***************************************************************************************
 * Function traverses the list reversely
 * *************************************************************************************/

void Doubly::reverse()
{
	//if the list is empty
	if(head == nullptr){
		cout << "List is empty.\n";
	}
	else{
		Node *nodeptr = tail;		//start at the tail
		cout << "The list reversed is: ";
		while(nodeptr){
			cout << nodeptr->getVal() << " ";
			nodeptr = nodeptr->getPrev();
		}
		cout << "\n";
	}
}

/***************************************************************************************
 * This function displays the list from head to tail
 * *************************************************************************************/

void Doubly::traverse()
{
	//if the list is empty
	if(head == nullptr){
		cout << "List is empty.\n";
	}
	else{
		Node *nodeptr = head;		//start at the head
		cout << "Doubly Linked List: ";
		while(nodeptr){
			cout << nodeptr->getVal() << " ";
			nodeptr = nodeptr->getNext();		//move to the next
		}
		cout << "\n";
	}
}
