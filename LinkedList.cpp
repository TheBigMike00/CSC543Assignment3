#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList()
{
	this->head = nullptr;
	this->count = 0;
}

Node* LinkedList::goToIndex(int index) //this method assumes that index is in bounds - #LAZY
{
	Node* currNode = this->head;
	if (index == 0)
		return currNode;
	else
	{
		while (index > 0)
		{
			currNode = currNode->getNextNode();
			index--;
		}
	}
	return currNode;
}

void LinkedList::addEnd(Node* newNode)
{
	if (this->count == 0)
	{
		this->head = newNode;
		this->count = 1;
	}
	else
	{
		goToIndex(this->count - 1)->setNextNode(newNode);
		this->count++;
	}
}

void LinkedList::display()
{
	if (this->count == 0)
	{
		std::cout << "THIS LIST IS EMPTY BRO" << "\n";
	}
	else
	{
		Node* currNode = this->head;
		int elements = this->count;
		while (elements > 0)
		{
			std::cout << "Row: " << currNode->getRow() << "\n";
			std::cout << "Column: " << currNode->getCol() << "\n";
			std::cout << "Value: " << currNode->getValue() << "\n\n";
			currNode = currNode->getNextNode();
			elements--;
		}
		std::cout << "\n";
	}

}
