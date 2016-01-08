#include <stdio.h>

void main(n){
	scanf("%d", &n);
	int sum = 0;
	for( int i = 1 ; i <= n ; ++i){
		if( i > 1 ) printf("+");
		printf("%d", i);
		sum += i;
	}
	printf(" = %d\n", sum);
}
