#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;
	srand(time(NULL));

	int strlength = strlen(str);
	int n = rand()%5000;
	printf("%d\n", n);
	for( i = 0 ; i < n ; ++i ){
		int length = rand()%10000;
		for( j = 0 ; j < length ; ++j ){
			printf("%c", str[rand()%strlength]);
		}

		printf("\n");
	}
	sleep(1);
	return 0;
}
