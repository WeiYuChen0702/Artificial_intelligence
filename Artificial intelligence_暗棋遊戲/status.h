#ifndef STATUS_INCLUDED
#define STATUS_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

class Status {
	public:
		Status();
		Status(const Status& s);
		~Status(void);
		void board_setting(const int source[32]);
		void colorswitch();
		int get_color();
		void set_color(const int cc);
		void over(int moveout[2]);
		void get_board(int dest[32]);

	private:
		int color;
		int chessboard[32];
};


#endif // !status.h
#pragma once


