#include <iostream>
#include "Point2D.h"
using namespace std;

int main(){
	int x, y;
	
	cin >> x >> y;
	Point2D p1(x, y);
	cin >> x >> y;
	Point2D p2(x, y);

	Point2D p3;
	p3 = p1 * p2;
	OutputPoint2D( p3 );
	return 0;
}
