#include <stdio.h>

void main(n){
	scanf("%d", &n);
	int array[1000];
	for( int i = 0 ; i < n ;++i ){
		scanf("%d", array+i );
	}

	for( int i = n-1 ; i >= 0 ; --i ){
		if( i < n-1 ) printf(" ");
		printf("%d", array[i]);
	}
	printf("\n");
}

