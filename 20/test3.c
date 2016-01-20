#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#define		STUDENTCNT	1000
#define		NAMELEN		11


int main()
{
	int 		i, j, n, min;
	char		NameList[STUDENTCNT][NAMELEN];
	char		temp[NAMELEN]={0};
	//	double		sum=0, average, test;


	scanf("%d", &n);
	//	printf("n=%d\n", n);
	/*
	   score = (int*) malloc (n*sizeof(int));
	   sortscore = (int*) malloc (n*sizeof(int));

	   if (score==NULL)
	   exit (1);
	 */		
	getchar();
	getchar();
	for (i=0;i<n;i++)
	{
		gets(NameList[i]);
		puts(NameList[i]);
		j=0;
		while (NameList[i][j]!='\0')
		{
			if ((NameList[i][j]>=65)&&(NameList[i][j]<=90))
			{
				NameList[i][j]+=32;
			}
			j++;
		}
		if ((NameList[i][0]>=97)&&(NameList[i][0]<=122))
		{
			NameList[i][0]-=32;
		}
		//		printf("%d: %s\n", i, NameList[i]);
	}	

	for (i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if (strcmp(NameList[min],NameList[j])>0)
			{
				min = j;
			}
		}
		//		printf("min=%d, i=%d, %s\n", min, i, NameList[min]);
		if (min!=i)
		{
			strcpy(temp,NameList[i]);
			strcpy(NameList[i],NameList[min]);
			strcpy(NameList[min],temp);
		}	
	}	

	for (i=0;i<n;i++)
	{
		printf("%d: %s\n", i+1, NameList[i]);
	}


	return 0;
}
