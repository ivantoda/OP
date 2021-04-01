#include<iostream>
#include"board.h"
#include"point.h"
#pragma once

using namespace std;

int main() {
	Board b(20, 10);
	Point p1(2, 2);
	Point p2(8, 8);
	Point p3(2,8);
	Point p4(16,8);
	b.draw_up_line(p2, 'p');
	b.draw_line(p1, p2, 'y');
	b.draw_line(p3, p4, 'x');
	b.display_board();
}