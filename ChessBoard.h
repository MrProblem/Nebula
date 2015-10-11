#pragma once
#include"Define.h"
class CChessBoard
{
public:
	int chessBoard[BOARD_LEN][BOARD_LEN];
	Air airBoard[BOARD_LEN][BOARD_LEN];
	Bunch bunchBoard[BOARD_LEN][BOARD_LEN];
	int bunchAirNum[BOARD_SIZE];
	int BlackPossibleMove[BOARD_LEN][BOARD_LEN];
	int WhitePossibleMove[BOARD_LEN][BOARD_LEN];
	LOC koPosition;
	int nextCode[5];
	int player;
	int step;
public:
	CChessBoard();
	void showBoard();
	~CChessBoard();
};

