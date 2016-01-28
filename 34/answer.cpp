#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	bool isPrime = true;
	for( int i = 2 ; i < n ; ++i ){
		if( n % i == 0 ){
			isPrime = false;
			break;
		}
	}
	if( isPrime ){
		cout << "Yes!" << endl;
	}
	else{
		cout << "No!" << endl;
		
	}
	return 0;
}
