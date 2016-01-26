#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	srand(time(NULL));
	printf("%d %d\n", rand()%1005, rand()%1005);
	sleep(1);
	return 0;
}
