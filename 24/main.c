#include <stdio.h>
#include "student.h"
#define MAXSIZE 1005

int main(){
	int n, i;
	Student students[MAXSIZE];

	scanf("%d", &n);
	for( i = 0 ; i < n ; ++i ){
		scanf("%d", &students[i].id);
		scanf("%d", &students[i].english);
		scanf("%d", &students[i].chinese);
		scanf("%d", &students[i].math);
	}
	printf("%d\n", maxScore(n, students));
	
	return 0;
}
