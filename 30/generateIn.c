#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	srand(time(NULL));
	printf("%d %d %d\n", rand()%1000, rand()%1000, rand()%1000);

	sleep(1);
	return 0;
}
