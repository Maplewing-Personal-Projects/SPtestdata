#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
	char c[1005][15];
	int n;
	scanf("%d", &n);
	gets(c[0]);
	for( int i = 0 ; i < n ; ++i ){
		gets(c[i]);
	}
	for( int i = 0 ; i < n ; ++i ){
		c[i][0] = toupper(c[i][0]);
		int len = strlen(c[i]);
		for( int j = 1 ; j < len ; ++j ){
			c[i][j] = tolower(c[i][j]);
		}
	}

	for( int i = 0 ; i < n ; ++i ){
		for( int j = i+1 ; j < n ; ++j ){
			if( strcmp(c[i], c[j]) > 0 ){
				char temp[15];
				strcpy(temp, c[i]);
				strcpy(c[i], c[j]);
				strcpy(c[j], temp);
			}
		}

	}

	for( int i = 1 ; i <= n ; ++i ){
		printf("%d: %s\n", i, c[i-1]);
	}
}

