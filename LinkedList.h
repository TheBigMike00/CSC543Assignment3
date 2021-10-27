#pragma once
#include "Node.h"

class LinkedList
{
private:
    Node* head;
    int count;
    Node* goToIndex(int index);


public:
    LinkedList();
    void addEnd(Node* newNode);
    void display();

};