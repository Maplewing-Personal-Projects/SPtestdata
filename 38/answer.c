#include <stdio.h>
#define MAXSIZE 1005

int main(){
	int n, i;
	int num[MAXSIZE] = {0};

	scanf("%d", &n);

	int maxId = 0;
	for( i = 0 ; i < n ; ++i ){
		int temp;

		for( int j = 0 ; j < 4 ; ++j ){
			scanf("%d", &temp);
			if( j > 0 ) num[i] += temp;
		}

		if( num[maxId] < num[i] ) maxId = i;
	}
	printf("%d\n", maxId+1);
	
	return 0;
}
