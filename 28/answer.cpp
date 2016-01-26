#include <iostream>
#include <string>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if( a % 2 == 1){
		++a;
	}

	int sum = 0;
	for( int i = a ; i <= b ; i += 2 ){  
		sum += i;
	}

	cout << sum << endl;
	return 0;
}
