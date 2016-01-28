#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;
	srand(time(NULL));

	int strlength = strlen(str);
		int length = rand()%10000;
		for( j = 0 ; j < length ; ++j ){
			printf("%c", str[rand()%strlength]);
		}

		printf("\n");
	sleep(1);
	return 0;
}
