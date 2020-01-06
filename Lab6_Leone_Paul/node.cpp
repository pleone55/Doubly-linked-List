/***************************************************************************************************
 * Program Name: node.cpp
 * Author: Paul Leone
 * Date: 8/1/2019
 * Description: Node class to create the boubly linked list
 * *************************************************************************************************/

#include "node.hpp"
#include <iostream>

using std::cout;

/***********************************************************************************
 * Constructor initializing member variables
 * *********************************************************************************/

Node::Node()
{
	next = nullptr;
	prev = nullptr;
	val = 0;
}

/**********************************************************************************
 * Overloaded constructor
 * ********************************************************************************/

Node::Node(int number)
{
	setVal(number);
	Node *nextptr = nullptr;
	Node *prevptr = nullptr;

	setNext(nextptr);
	setPrev(prevptr);
}

/****************************************************************************************
 * Setter functions that sets the value of the node, sets the node's previous pointer
 * and sets the node's next pointer.
 * **************************************************************************************/

void Node::setVal(int v)
{
	val = v;
}

void Node::setPrev(Node *p)
{
	prev = p;
}

void Node::setNext(Node *n)
{
	next = n;
}

/***************************************************************************************
 * Getter functions that return the node's value, returns the nodes previous pointer
 * and returns the node's next pointer
 * *************************************************************************************/

int Node::getVal()
{
	return val;
}

Node* Node::getPrev()
{
	return prev;
}

Node* Node::getNext()
{
	return next;
} 
