#include <stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	if( n / 1000000000 > 0 ) printf("%03d,", n / 1000000000);
	if( n / 1000000 > 0 ) printf("%03d,", n % 1000000000 / 1000000 );
	if( n / 1000 > 0 ) printf("%03d,", n % 1000000 / 1000 );
	if( n > 0 ) printf("%03d", n % 1000 );
	printf("\n");
}
