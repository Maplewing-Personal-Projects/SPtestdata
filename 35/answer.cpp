#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string n;
	cin >> n;
	for( int i = 0 ; i < n.length() ; ++i ){
		if( i % 2 == 0 ){
			n[i] = toupper(n[i]);
		}
		else {
			n[i] = tolower(n[i]);
		}
	}
	
	cout << n << endl;
	return 0;
}
