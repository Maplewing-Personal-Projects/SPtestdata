#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
	char c[1005];
	gets(c);

	int length = strlen(c);
	for( int i = 0 ; i < length ; ++i ){
		printf("%c", toupper(c[i]));
	}
}

