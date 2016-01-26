#include <stdio.h>
#include <string.h>
#include <ctype.h>

int f(int n){
	if( n <= 2 ) return 1;
	else return f(n-1) + f(n-2);
}

void main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", f(n));
	return 0;
}
