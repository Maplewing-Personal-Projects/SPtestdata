#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	char randLetters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ 0987654321;'/.,=-";
	int sizeL = strlen(randLetters);
	srand(time(NULL));
	int n = rand() % 1000;

	for( int i = 0 ; i < n ; ++i ){
		printf("%c", randLetters[rand() % sizeL]);
	}
	printf("\n");
	return 0;
}
