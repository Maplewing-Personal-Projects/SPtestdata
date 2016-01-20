#include <stdio.h>

void main(n){
	scanf("%d", &n);
	int array[1000];

	for( int i = 0 ; i < n ;++i ){
		scanf("%d", array+i );
	}

	for( int i = 0 ; i < n ; ++i ){
		for( int j = i+1 ; j < n ; ++j ){
			if( array[j] < array[i] ){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	for( int i = 0 ; i < n ; ++i )
		printf("%d\n", array[i]);
}

