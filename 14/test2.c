#include <stdio.h>
int main(){
	int i, j, n, temp;
	int a[1000];
	scanf("%d", &n);
	for(i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		int min=i;
		for(j=i+1; j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	for(i=0; i<n;i++){
		printf("%d\n", a[i]);
	}
	return 0;
} 

