#include "ChessBoard.h"
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

bool ChessBoard::placeQueens(Queen* queenPtr)
{
	// Base case: Try to place a queen in a nonexistent column.
	if (queenPtr->getCol() >= BOARD_SIZE)
	{
		delete queenPtr;
		return true;
	}  // end if

	bool isQueenPlaced = false;
	while (!isQueenPlaced && queenPtr->getRow() < BOARD_SIZE)
	{
		// If the queen can be attacked, try moving it
		// to the next row in the current column
		if (queenPtr->isUnderAttack())
			queenPtr->nextRow();
		else
		{
			// Put this queen on the board and try putting a
			// new queen in the first row of the next column
			setQueen(queenPtr);
			Queen* newQueenPtr = new Queen(0, queenPtr->getCol() + 1);
			isQueenPlaced = placeQueens(newQueenPtr);

			// If it wasn't possible to put the new queen in the next column,
			// backtrack by deleting the new queen and moving the last
			// queen placed down one row
			if (!isQueenPlaced)
			{
				delete newQueenPtr;
				removeQueen();
				queenPtr->nextRow();
			}  // end if
		}  // end if
	}  // end while

	return isQueenPlaced;
}  // end placeQueens
