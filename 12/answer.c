#include <stdio.h>

void main(n){
	scanf("%d", &n);
	int array[1000];
	int sum = 0;
	for( int i = 0 ; i < n ;++i ){
		scanf("%d", array+i );
		sum += array[i];
	}

	double avg = (double)sum / n;
	printf("Average: %lf\n", avg);

	printf("No Pass:");
	for( int i = 0 ; i < n ; ++i ){
		if( array[i] < avg ){
			printf(" %d", array[i]);
		}
	}
	printf("\n");
}

