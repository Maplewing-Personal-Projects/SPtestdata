#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;

	string answer, input;
	for( int i = 0 ; i < n ; ++i ){
		cin >> input;
		answer += input;
	}
	
	cout << answer << endl;
	return 0;
}
