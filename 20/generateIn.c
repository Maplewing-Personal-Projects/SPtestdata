#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	char randLetters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int sizeL = strlen(randLetters);
	srand(time(NULL));
	int n = rand() % 1000;
	printf("%d\n", n);

	for( int i = 0 ; i < n ; ++i ){
		int len = rand() % 10 + 1;
		for( int j = 0 ; j < len ; ++j )
			printf("%c", randLetters[rand() % sizeL]);
		printf("\n");
	}
	return 0;
}
