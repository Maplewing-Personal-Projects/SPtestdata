#include <iostream>
#include "square.h"
using namespace std;

int main(){
	int n;
	cin >> n;
	
	Square s;
	s.setLen(n);

	cout << s.area() << endl;

	return 0;
}
