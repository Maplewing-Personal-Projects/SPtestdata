#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	srand(time(NULL));
	int a = rand()%1000, b = rand()%1000;
	printf("%d %d\n", (a < b)?a:b, (a<b)?b:a);
	sleep(1);
	return 0;
}
