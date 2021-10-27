#pragma once

class Node
{
private:
	int row;
	int col;
	int value;
	Node* nextNode;

public: 
	Node(int inputRow, int inputCol, int inputValue);
	void setNextNode(Node* newNode);
	Node* getNextNode();
	int getRow();
	int getCol();
	int getValue();
};