#pragma once
#include<iostream>
#include<vector>
#include"board.h"
#include"point.h"

using namespace std;

Board::Board(int w, int h) {
	width = w;
	height = h;
	z = 'o';
	matrica();
	create();
}

Board::~Board() {
	for (int i = 0; i < height; i++)
		delete[] matrix[i];
	delete[] matrix;
}

Board::Board(const Board& other) {
	width = other.width, height = other.height, z = other.z, matrix = other.matrix;
}
void Board::display_board() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << matrix[i][j];
		}
		cout << "\n";
	}
}

void Board::create() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || j == 0 || i == height - 1 || j == width - 1)
			{
				matrix[i][j] = z;
			}
			else
				matrix[i][j] = ' ';
		}
	}
}

void Board::matrica() {
	matrix = new char* [height];
	for (int i = 0; i < height; i++) {
		matrix[i] = new char[width];
	}
}

void Board::draw_ch(Point p, char ch) {
	int a = (int)p.x; 
	int b = (int)p.y;
	matrix[a][b] = ch;
}

void Board::draw_up_line(Point p, char ch) {
	int a = (int)p.x, b = (int)p.y;
	for (int i = a; i > 0; i--) {
		p.x = i;
		draw_ch(p, ch);
	}
}

void Board::draw_line(Point p1, Point p2, char ch) {
	int a1 = (int)p1.x, b1 = (int)p1.y;
	int a2 = (int)p2.x, b2 = (int)p2.y;
	while (a1 != a2 || b1 != b2)
	{
		if (a1 > a2)
		{
			a1--;
		}
		if (a1 < a2)
		{
			a1++;
		}
		if (b1 > b2)
		{
			b1--;
		}
		if (b1 < b2)
		{
			b1++;
		}
		if (a1 == a2 && b1 == b2)
			break;
		Point temp(b1, a1);
		draw_ch(temp, ch);
	}

}