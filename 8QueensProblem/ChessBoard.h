//ChessBoard.h -- ADT for ChessBoard

#include <string>

template<class ItemType>
class ChessBoard
{
public:
	ChessBoard();
	~ChessBoard();

	/*Function to place eight queens on the chessboard that cannot attack one another
	Precondition: None
	Postcondition: The queens are placed in the array mparrstrChessBoard */
	void placeEightQueens();

	/* Function to print 2D array with placement of queens.
	Precondition: function placeEightQueens() has been called. */
	void print() const;

private:
	/*Function to add queen to 2D array.
	Precondition: None
	Postcondition: Queen is placed in array if true is returned, otherwise data
				   has not changed.
	Returns: True if addition was successful, false if not.
	Parameter: index1 - row for queen to be placed in 2D array.
	Parameter: index2 - column for queen to be placed in 2D array. */
	bool addQueen(int index1, int index2);

	/*Function to remove queen in 2D array.
	Precondition: None
	Postcondition: Queen is removed from array if true is returned, otherwise data
				   has not changed.
	Returns: True if removal was successful, false if not.
	Parameter: index1 - row for queen to be removed from 2D array.
	Parameter: index2 - column for queen to be removed from 2D array. */
	bool removeQueen(int index1, int index2);

	/* Function to create horizontal attack path of given queen.
	Precondition: Given indexes point to a queen. 
	Postcondition: attack path of given queen is created. 
	Returns: True if attack path was created, or false if not. 
	Parameter: index1 - row of given queen. 
	Parameter: index2 - column of given queen. */
	bool createHorizontalAttackPath(int index1, int index2);


	/* Function to remove horizontal attack path of given queen.
	Precondition: Given indexes point to a queen.
	Postcondition: attack path of given queen is removed.
	Returns: True if attack path was removed, or false if not.
	Parameter: index1 - row of given queen.
	Parameter: index2 - column of given queen. */
	bool removeHorizontalAttackPath(int index1, int index2);

	/* Function to create vertical attack path of given queen.
	Precondition: Given indexes point to a queen.
	Postcondition: attack path of given queen is created.
	Returns: True if attack path was created, or false if not.
	Parameter: index1 - row of given queen.
	Parameter: index2 - column of given queen. */
	bool createVerticalAttackPath(int index1, int index2);


	/* Function to remove vertical attack path of given queen.
	Precondition: Given indexes point to a queen.
	Postcondition: attack path of given queen is removed.
	Returns: True if attack path was removed, or false if not.
	Parameter: index1 - row of given queen.
	Parameter: index2 - column of given queen. */
	bool removeVerticalAttackPath(int index1, int index2);

	/* Function to create diagonal attack path of given queen.
	Precondition: Given indexes point to a queen.
	Postcondition: attack path of given queen is created.
	Returns: True if attack path was created, or false if not.
	Parameter: index1 - row of given queen.
	Parameter: index2 - column of given queen. */
	bool createDiagonalAttackPath(int index1, int index2);


	/* Function to remove diagonal attack path of given queen.
	Precondition: Given indexes point to a queen.
	Postcondition: attack path of given queen is removed.
	Returns: True if attack path was removed, or false if not.
	Parameter: index1 - row of given queen.
	Parameter: index2 - column of given queen. */
	bool removeDiagonalAttackPath(int index1, int index2);

	// declarations
	string **mparrstrChessBoard; // 2D array that mimics the size of a ChessBoard.
	int miNumberOfQueens; // keeps track of number of queens on the Chessboard.
};
