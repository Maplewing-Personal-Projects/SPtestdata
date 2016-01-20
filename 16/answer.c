#include <stdio.h>

void main(){
	char c;
	scanf("%c", &c);
	if( c <= 'z' && c >= 'a'){
		printf("%c\n", c+'A'-'a');
	}
	else printf("%c\n", c);
}

