#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	printf("%d %d\n", rand() % 1000, rand() % 1000);
	sleep(1);
	return 0;
}
