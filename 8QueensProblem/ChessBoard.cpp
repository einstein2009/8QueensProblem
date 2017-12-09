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

bool ChessBoard::addQueen(int index1, int index2)
{
	return false;
}

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


//Rodel Aragon
void ChessBoard::placeEightQueens()
{
	int iRow;
	int iQueen1Column, iQueen2Column, iQueen3Column,
		iQueen4Column, iQueen5Column, iQueen6Column, iQueen7Column;
	do
	{
		bool bQueenPlaced = false;

		switch (miNumberOfQueens)
		{
		case 0:
		{
			iRow = 0;

			// for each column check if a queen can be added
			for (int iColumn = 0; iColumn < 8; iColumn++)
			{
				bQueenPlaced = addQueen(iRow, iColumn);

				// if queen is added save the column value of the queen
				if (bQueenPlaced)
					iQueen1Column = iColumn;
			}
			break;
		}
		case 1:
		{
			iRow = 1;

			// for each column check if a queen can be added
			for (int iColumn = 0; iColumn < 8; iColumn++)
			{
				bQueenPlaced = addQueen(iRow, iColumn);

				// if queen is added save the column value of the queen
				// and terminate loop
				if (bQueenPlaced)
				{
					iQueen2Column = iColumn;
					iColumn = 8;
				}
			}

			//if Queen cannot be placed, remove last queen placed
			if (!bQueenPlaced)
				removeQueen(iRow, iQueen1Column);

			break;
		}
		case 2:
		{
			iRow = 2;

			// for each column check if a queen can be added
			for (int iColumn = 0; iColumn < 8; iColumn++)
			{
				bQueenPlaced = addQueen(iRow, iColumn);

				// if queen is added save the column value of the queen
				// and terminate loop
				if (bQueenPlaced)
				{
					iQueen3Column = iColumn;
					iColumn = 8;
				}
			}

			//if Queen cannot be placed, remove last queen placed
			if (!bQueenPlaced)
				removeQueen(iRow, iQueen2Column);

			break;
		}
		case 3:
		{
			iRow = 3;

			// for each column check if a queen can be added
			for (int iColumn = 0; iColumn < 8; iColumn++)
			{
				bQueenPlaced = addQueen(iRow, iColumn);

				// if queen is added save the column value of the queen
				// and terminate loop
				if (bQueenPlaced)
				{
					iQueen4Column = iColumn;
					iColumn = 8;
				}
			}

			//if Queen cannot be placed, remove last queen placed
			if (!bQueenPlaced)
				removeQueen(iRow, iQueen3Column);

			break;
		}
		case 4:
		{
			iRow = 4;

			// for each column check if a queen can be added
			for (int iColumn = 0; iColumn < 8; iColumn++)
			{
				bQueenPlaced = addQueen(iRow, iColumn);

				// if queen is added save the column value of the queen
				// and terminate loop
				if (bQueenPlaced)
				{
					iQueen5Column = iColumn;
					iColumn = 8;
				}
			}

			//if Queen cannot be placed, remove last queen placed
			if (!bQueenPlaced)
				removeQueen(iRow, iQueen4Column);

			break;
		}
		case 5:
		{
			iRow = 5;

			// for each column check if a queen can be added
			for (int iColumn = 0; iColumn < 8; iColumn++)
			{
				bQueenPlaced = addQueen(iRow, iColumn);

				// if queen is added save the column value of the queen
				// and terminate loop
				if (bQueenPlaced)
				{
					iQueen6Column = iColumn;
					iColumn = 8;
				}
			}

			//if Queen cannot be placed, remove last queen placed
			if (!bQueenPlaced)
				removeQueen(iRow, iQueen5Column);

			break;
		}
		case 6:
		{
			iRow = 6;

			// for each column check if a queen can be added
			for (int iColumn = 0; iColumn < 8; iColumn++)
			{
				bQueenPlaced = addQueen(iRow, iColumn);

				// if queen is added save the column value of the queen
				// and terminate loop
				if (bQueenPlaced)
				{
					iQueen7Column = iColumn;
					iColumn = 8;
				}
			}

			//if Queen cannot be placed, remove last queen placed
			if (!bQueenPlaced)
				removeQueen(iRow, iQueen6Column);

			break;
		}
		case 7:
		{
			iRow = 7;

			// for each column check if a queen can be added
			for (int iColumn = 0; iColumn < 8; iColumn++)
			{
				bQueenPlaced = addQueen(iRow, iColumn);

				// if queen is added, terminate loop
				if (bQueenPlaced)
					iColumn = 8;
			}

			//if Queen cannot be placed, remove last queen placed
			if (!bQueenPlaced)
				removeQueen(iRow, iQueen7Column);

			break;
		}
		default:
			break;
		}
	} while (miNumberOfQueens != 8);
}