/***********************************************************
*                                                          *
*  Authors:       Rodel Aragon, Colby Abrahamoff,          *
*                 Christsandra Broderick, Chandler Snoddy  *
*                 Nicholas Ackors, Stephen Hall            *
*  Course:        CS322 Data Structure and Algorithms II   *
*  Assignment:    Module 7, Written Assignment             *
*  Program:       8 Queens problem		           *
*  Description:   Creates a chessboard populated with 8	   *
*		  queens in such a manor that no queen can *
*		  attack another.                          *
*  Input:         Takes no input, simply displays options. *
*  Output:        Displays a simulated chessboard with the *
*                 location of all eight queens.            *
*  Created:       12/9/2017                                *
*                                                          *
***********************************************************/

#include "ChessBoard.h"

using namespace std;

int main()
{
	ChessBoard<string> *CpChessBoardPtr = new ChessBoard<string>;
	
	CpChessBoardPtr->placeEightQueens();
	CpChessBoardPtr->display();
	
	//clears buffer and terminates program on next input
	cout << "Terminating program... press any key to exit.";
	cin.clear();
	cin.ignore(100, '\n');
	cin.get();
	
	return 0;
}
