#include <stdio.h>

int main(){
	char str[20000];
	while( gets(str) ) printf("%s\n", str);
	return 0;
}
