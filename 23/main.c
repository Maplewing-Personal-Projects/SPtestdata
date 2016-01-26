#include <stdio.h>
#include "sum.h"
#define MAXSIZE 1005

int main(){
	int n, i;
	int num[MAXSIZE];

	scanf("%d", &n);
	for( i = 0 ; i < n ; ++i ){
		scanf("%d", &num[i]);
	}
	printf("%d\n", sum(n, num));
	
	return 0;
}
