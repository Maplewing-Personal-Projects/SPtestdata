#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int n = rand() % 1000;
	printf("%d\n", n);

	int isVisited[1000] = {0};
	for( int i = 0 ; i < n ; ++i ){
		int sid = rand() % n;
		while( isVisited[sid] ){
			sid = (sid + 1) % n;
		}
		isVisited[sid] = 1;
	
		printf("%d %d\n", sid + 1, rand() % 101);
	}
	return 0;
}
