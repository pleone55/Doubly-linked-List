/*********************************************************************************************
 * Program Name: doubly.hpp
 * Author: Paul Leone
 * Date: 8/1/2019
 * Description: Doubly class that holds the head and tail of the node
 * ********************************************************************************************/

#ifndef DOUBLY_HPP
#define DOUBLY_HPP
#include "node.hpp"

class Doubly
{
	private:
		Node* head;
		Node* tail;
	public:
		Doubly();
		~Doubly();
		void addHead(int);
		void addTail(int);
		void deleteHead();
		void deleteTail();
		void reverse();		//traverse the list reversely
		void traverse();	//print list
		void displayHead();
		void displayTail();
};
#endif
