#ifndef __POINT2D__
#define __POINT2D__

#include <iostream>
using namespace std;

class Point2D{
	private:
		int _x, _y;
	public:
		Point2D(int x, int y){
			_x = x;
			_y = y;
		}

		Point2D(){
			_x = 0;
			_y = 0;
		}
		
		Point2D operator*(Point2D &rhs){
			return Point2D(rhs._x * _x, rhs._y * _y);
		}
		
		friend void OutputPoint2D(Point2D &p);
};

void OutputPoint2D(Point2D &p){
	cout << '(' << p._x << ',' << p._y << ')' << endl;

}

#endif
