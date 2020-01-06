/*******************************************************************************************************
 * Program Name: Paul Leone
 * Author: Paul Leone
 * Date: 8/1/2019
 * Description: Node class to form the doubly linked list
 * *****************************************************************************************************/

#ifndef NODE_HPP
#define NODE_HPP

class Node
{
	private:
		Node *next;
		Node *prev;
		int val;
	public:
		Node();
		Node(int);
		//setter functions
		void setVal(int);
		void setPrev(Node*);
		void setNext(Node*);
		//getter functions
		int getVal();
		Node* getPrev();
		Node* getNext();
};
#endif
