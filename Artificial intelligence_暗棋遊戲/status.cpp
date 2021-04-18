#include "status.h"

Status::Status()
{
	memset(chessboard, 0, 32);
}
Status::Status(const Status& s)
{
	board_setting(s.chessboard);
	color = s.color;
}
Status::~Status(void)
{
	
}

void Status::board_setting(const int source[32])
{
	for (int i = 0; i < 32; i++)
		chessboard[i] = source[i];
}

void Status::colorswitch()
{
	//color = (color == 0) ? 1 : 0;
	if (color == 0)
	{
		color=1;
	}
	else
	{
		color=0;
	}
}

int Status::get_color()
{
	return color;
}

void Status::set_color(const int cc)
{
	color = cc;
}

void Status::over(int moveout[2])
{
	char piece = chessboard[moveout[0]];
	chessboard[moveout[0]] = '-';
	chessboard[moveout[1]] = piece;
	
}

void Status::get_board(int dest[32])
{
	for (int i = 0; i < 32; i++)
		dest[i] = chessboard[i];
}

