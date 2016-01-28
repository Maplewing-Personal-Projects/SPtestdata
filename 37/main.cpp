#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
	int w, h;
	cin >> w >> h;
	
	Rectangle s(w, h);
	s.setWidth(w);
	s.setHeight(h);

	cout << s.area() << endl;

	return 0;
}
