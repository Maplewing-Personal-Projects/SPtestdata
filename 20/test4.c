#include <stdio.h>
#define NAME 15
#define NUMBER 1000
#include <string.h>

int main()
{
	int n,i,j;
	char name[NUMBER][NAME];
	char temp[NAME];


	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&name[i]);

	}

	for(i=0;i<n;i++)
	{

		if((name[i][0]<=122) && (name[i][0]>=97))
		{
			name[i][0]-=32;
		}

		for(j=1;name[i][j]!='\0';j++)
		{
			if((name[i][j]>=65) && (name[i][j]<=90))
			{
				name[i][j]+=32;
			} 
		}

	}

	int k;
	for( k=n-1; k>=0; k--)
		for (i=0; i<k; i++)
		{

			for(j=0;name[i][j]!='\0';j++)
			{
				if(name[i][j]>name[i+1][j])
				{
					strcpy(temp,name[i]);
					strcpy(name[i],name[i+1]);
					strcpy(name[i+1],temp);
					break;
				}else if(name[i][j]<name[i+1][j])
				{
					break;
				}
			}

		}



	for(i=0;i<n;i++)
	{

		printf("%d: %s\n",i+1,name[i]);
	}

	return 0;
}

