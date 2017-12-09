#include "ChessBoard.h"
#include <iostream>
#include <string>

using namespace std;

//Rodel Aragon
ChessBoard::ChessBoard()
{
	miNumberOfQueens = 0;

	//creates dynamic 2D array
	mparrstrChessBoard = new string*[8];
	for (int i = 0; i < 8; i++)
		mparrstrChessBoard[i] = new string[8];

	//initialize array elements to empty.
	for (int iRow = 0; iRow < 8; iRow++)
		for (int iColumn = 0; iColumn < 8; iColumn++)
			mparrstrChessBoard[iRow][iColumn] = "";

}// end constructor

//Rodel Aragon
ChessBoard::~ChessBoard()
{
	//deallocate 2D array
	for (int i = 0; i < 8; i++)
		delete[] mparrstrChessBoard[i];

	delete[] mparrstrChessBoard;

	miNumberOfQueens = 0;
}// end destructor

//Rodel Aragon
void ChessBoard::placeEightQueens()
{
}

//Rodel Aragon
void ChessBoard::print() const
{
	string strArrayElement;

	for (int iRow = 0; iRow < 8; iRow++)
	{
		for (int iColumn = 0; iColumn < 8; iColumn++)
		{
			strArrayElement = mparrstrChessBoard[iRow][iColumn];

			//if array element is a queen
			if (strArrayElement[0] == 'Q')
				cout << "[" << strArrayElement << "]";
			else // array element is not queen
				cout << "[  ]";
		}

		cout << endl;
	}
}

//Steve Hall
bool ChessBoard::addQueen(int index1, int index2)
{
	return false;
}
//Steve Hall
bool ChessBoard::removeQueen(int index1, int index2)
{
	return false;
}


//Chandler Snoddy
bool ChessBoard::createHorizontalAttackPath(int index1, int index2)
{
	return false;
}
//Chandler Snoddy
bool ChessBoard::removeHorizontalAttackPath(int index1, int index2)
{
	return false;
}

//Nick Ackors
bool ChessBoard::createVerticalAttackPath(int index1, int index2)
{
	return false;
}
//Nick Ackors
bool ChessBoard::removeVerticalAttackPath(int index1, int index2)
{
	return false;
}

//Colby Abrahamoff
bool ChessBoard::createDiagonalAttackPath(int index1, int index2)
{
	return false;
}
//Colby Abrahamoff
bool ChessBoard::removeDiagonalAttackPath(int index1, int index2)
{
	return false;
}