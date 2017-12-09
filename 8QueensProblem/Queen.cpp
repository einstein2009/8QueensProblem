#include "Queen.h"

#pragma once

Queen::Queen()
{
	row = 0;
	col = 0;
}

Queen::Queen(int inRow, int inCol)
{
	row = inRow;
	col = inCol;
}

int Queen::getCol() const
{
	return col;
}

int Queen::getRow() const
{
	return row;
}