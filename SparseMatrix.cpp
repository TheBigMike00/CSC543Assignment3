#include "SparseMatrix.h"


SparseMatrix::SparseMatrix(int** matrix, int numRows, int numColumns)
{
	this->theMatrix = matrix;
	this->rows = numRows;
	this->cols = numColumns;
	this->listOfValues = new LinkedList();
	convertThatThang();
}

void SparseMatrix::convertThatThang()
{
	for (int i = 0; i < this->rows; i++)
	{
		for (int j = 0; j < this->cols; j++)
		{
			if (this->theMatrix[i][j] != 0)
				listOfValues->addEnd(new Node(i, j, this->theMatrix[i][j]));
		}
	}
}


void SparseMatrix::display()
{
	this->listOfValues->display();
}