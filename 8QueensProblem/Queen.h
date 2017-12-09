//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** Listing 5-2.
@file Queen.h */

#pragma once
#ifndef _QUEEN
#define _QUEEN

class ChessBoard; // Forward declaration of Board class

			 /** The Queen class. */
class Queen
{
private:
	int row; // Row (or prospective row) of queen if it is on the board
	int col; // Column (or prospective column) of queen if it is on the board

			 // All queens share the same board
	static const ChessBoard* boardPtr;

public:
	/** Places a queen in upper-left corner of board. */
	Queen();

	/** Places a queen in supplied location. */
	Queen(int inRow, int inCol);

	/** @return Column number. */
	int getCol() const;

	/** @return Row number. */
	int getRow() const;

}; // end Queen
#include "Queen.cpp"
#endif _QUEEN