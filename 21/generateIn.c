#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	srand(time(NULL));
	printf("%d\n", rand()%1005);
	return 0;
}
