#include <stdio.h>

void main(n){
	scanf("%d", &n);
	int array[1000][2];
	int sum = 0;
	for( int i = 0 ; i < n ;++i ){
		scanf("%d%d", &array[i][0], &array[i][1] );
		sum += array[i][1];
	}

	double avg = (double)sum / n;
	printf("Average: %lf\n", avg);

	printf("No Pass:");
	for( int i = 0 ; i < n ; ++i ){
		if( array[i][1] < avg ){
			printf(" %d", array[i][0]);
		}
	}
	printf("\n");
}

