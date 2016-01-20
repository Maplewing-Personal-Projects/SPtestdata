#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int n = rand() % 1000;
	printf("%d\n", n);

	for( int i = 0 ; i < n ; ++i ){
		if( i > 0 ) printf(" ");
		printf("%d", rand());
	}

	printf("\n");
	return 0;
}
