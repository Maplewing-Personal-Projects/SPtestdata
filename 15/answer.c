#include <stdio.h>

void main(n){
	scanf("%d", &n);
	int array[1000][2];
	int sum = 0;
	for( int i = 0 ; i < n ;++i ){
		scanf("%d%d", &array[i][0], &array[i][1] );
	}

	for( int i = 0 ; i < n ; ++i ){
		for( int j = i+1 ; j < n ; ++j ){
			if( array[j][0] < array[i][0] ){
				int temp = array[i][0];
				array[i][0] = array[j][0];
				array[j][0] = temp;

				temp = array[i][1];
				array[i][1] = array[j][1];
				array[j][1] = temp;
			}
		}
	}
	for( int i = 0 ; i < n ; ++i )
		printf("%d %d\n", array[i][0], array[i][1]);
}

