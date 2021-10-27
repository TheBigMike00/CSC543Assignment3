#pragma once
#include "LinkedList.h"

class SparseMatrix
{
private:
	LinkedList* listOfValues;
	int** theMatrix;
	int rows;
	int cols;
	void convertThatThang();

public: 
	SparseMatrix(int** matrix, int numRows, int numColumns);
	void display();
};