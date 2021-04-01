#pragma once
#include<iostream>
#include<vector>
#include "point.h"

using namespace std;

class Board {
	int width;
	int height;
	char z;
	char** matrix;
public:
	Board(int w, int h);
	~Board();
	Board(const Board& other);
	void matrica();
	void display_board();
	void create();
	void draw_ch(Point p, char ch);
	void draw_up_line(Point p, char ch);
	void draw_line(Point p1, Point p2, char ch);
};
