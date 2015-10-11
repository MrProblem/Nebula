#include "ChessBoard.h"


CChessBoard::CChessBoard()
{
	for (int i = 0; i < BOARD_LEN; i++)
		for (int j = 0; j < BOARD_LEN; j++)
		{
			chessBoard[i][j] = EMPTY;
			airBoard[i][j].airCode = NONE;
			airBoard[i][j].airColor = empty;
			bunchBoard[i][j].bunchCode = NONE;
			bunchBoard[i][j].bunchColor = empty;
			BlackPossibleMove[i][j] = ALLOW;
			WhitePossibleMove[i][j] = ALLOW;
		}

	for (int i = 0; i < BOARD_LEN; i++)
	{
		chessBoard[0][i] = EDGE;
		chessBoard[BOARD_LEN - 1][i] = EDGE;
		chessBoard[i][0] = EDGE;
		chessBoard[i][BOARD_LEN - 1] = EDGE;
		airBoard[BOARD_LEN-1][i].airCode = EDGE;
		airBoard[0][i].airCode = EDGE;
		airBoard[i][0].airCode = EDGE;
		airBoard[i][BOARD_LEN-1].airCode = EDGE;
		bunchBoard[i][0].bunchCode = EDGE;
		bunchBoard[i][BOARD_LEN-1].bunchCode = EDGE;
		bunchBoard[0][i].bunchCode = EDGE;
		bunchBoard[BOARD_LEN - 1][i].bunchCode = EDGE;
	}

	for (int i = 0; i < BOARD_SIZE; i++)
	{
		bunchAirNum[i] = 0;
	}

	koPosition.x = NONE;
	koPosition.y = NONE;

	for (int i = 0; i < 5; i++)
	{
		nextCode[i] = 0;
	}

	step = 0;
	player = BLACK;
}

void CChessBoard::showBoard()
{
	for (int i = 1; i < BOARD_LEN-1; i++)
	{
		printf("%4d", i);
	}
	cout << endl;
	for (int j = 1; j < BOARD_LEN - 1; j++)
	{
		for (int i = 1; i < BOARD_LEN - 1; i++)
		{
			if (chessBoard[i][j] == BLACK)
				cout << "��";
			else if (chessBoard[i][j] == WHITE)
				cout << "��";
			else if (chessBoard[i][j] == EMPTY)
		}
	}
}


CChessBoard::~CChessBoard()
{
}
