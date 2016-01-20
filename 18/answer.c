#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
	char c[1005];
	gets(c);

	int length = strlen(c);
	int ascii[256] = {0};
	for( int i = 0 ; i < length ; ++i ){
		if( isalpha(c[i]) ) ascii[tolower(c[i])]++;
	}

	for( int i = 'a' ; i <= 'z' ; ++i ){
		printf("%c: %d\n", i, ascii[i]);
	}
}

