#pragma once
#include<iostream>

using namespace std;

struct Point {
	double x;
	double y;
public:
	Point(double x1, double y1) { x = x1; y = y1; };
	Point(const Point& other) { x = other.x; y = other.y; };
	~Point() {};
};