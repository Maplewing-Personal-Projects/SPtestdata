#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int n = rand()%1000;
	printf("%d\n", n);

	for( int i = 0 ; i < n ; ++i ){
		printf("%d", i+1);
		for( int j = 0 ; j < 3 ; ++j )
			printf(" %d", rand() % 100);
		printf("\n");
	}

	sleep(1);
	return 0;
}
