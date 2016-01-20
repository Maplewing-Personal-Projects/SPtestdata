#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max_stu 1000
int main()
{
	int stu_size;

	scanf("%d", &stu_size);
	if(stu_size>max_stu)
	{
		stu_size=max_stu;
	}

	int i,j;
	char student[max_stu][11];
	char stu_temp[11];

	for(i=0;i<stu_size;i++)
	{
		fflush(stdin);
		fgets(student[i],10,stdin);	

		for(j=0;j<10;j++)
		{
			if(j==0)
			{
				student[i][j]=toupper(student[i][j]);
			}
			else
			{
				student[i][j]=tolower(student[i][j]);
			}
		}
	}

	for(i=0;i<stu_size;i++)
	{
		for(j=0;j<stu_size;j++)
		{
			if(strcmp(student[j],student[i])>0)
			{
				strcpy(stu_temp,student[j]);
				strcpy(student[j],student[i]);
				strcpy(student[i],stu_temp);
			}
		}
	}

	for(i=0;i<stu_size;i++)
	{
		printf("%d: %s", i+1, student[i]);
	}

	return 0;
}
