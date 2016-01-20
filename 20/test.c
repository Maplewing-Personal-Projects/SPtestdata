#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 1000
#define W 10

int main()
{

	int n;
	char a[N][W];

	scanf("%d", &n);
	gets(a[0]);

	for (int i=0; i < n ; i++)
	{

		gets(a[i]);
	}




	char tmp[W];



	for(int i=0; i < n; i++)
	{


		int k;
		for(k =0;k < W;k++)
			if(a[i][k] == '\0')
				break;
		a[i][0] = toupper(a[i][0]);
		for (int j=1; j < k; j++)
			a[i][j] = tolower(a[i][j]);


	}	





	for (int i=0;  i < n-1; i++)
		for (int j=0; j < n-1-i; j++)
			if (strcmp(a[j],a[j+1]) >= 0)
			{
				strcpy(tmp, a[j+1]);
				strcpy(a[j+1], a[j]);
				strcpy(a[j],tmp);
			}


	for (int i=0; i < n ; i++)
		printf("%d: %s\n", i+1, a[i]);





	return 0;

}
