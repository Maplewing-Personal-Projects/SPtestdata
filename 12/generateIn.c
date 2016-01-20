#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int n = rand() % 1000;
	printf("%d\n", n);

	for( int i = 0 ; i < n ; ++i ){
		printf("%d\n", rand() % 101 + 1);
	}
	return 0;
}
