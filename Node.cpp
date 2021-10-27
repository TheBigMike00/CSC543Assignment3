#include "Node.h"

Node::Node(int inputRow, int inputCol, int inputValue)
{
    this->row = inputRow;
    this->col = inputCol;
    this->value = inputValue;
    this->nextNode = nullptr;
}

void Node::setNextNode(Node* newNode)
{
    this->nextNode = newNode;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}

int Node::getRow()
{
    return this->row;
}

int Node::getCol()
{
    return this->col;
}

int Node::getValue()
{
    return this->value;
}
