#include <stdio.h>
#include <string.h>
void arr_init(char*arr)
{
	int i;
	for(i = 0 ; i < 200 ; i++)
	{
		arr[i] = 0;
	}
}
int main(void)
{
	int j;
	char arr[200];
	int sum = 0;
	int fail;
	while(1)
	{
		sum = 0;
		fail = 0;
		arr_init(arr);
		gets(arr);
		if (arr[0]=='0' && arr[1]=='\0')
			break;
		else
		{
			for(j = 0 ; arr[j]!='\0' ; j++)
			{
				if(arr[j] >= 'a' && arr[j] <= 'z')
					sum += ((int)arr[j]-96);
				else if(arr[j] >= 'A' && arr[j] <= 'Z')
					sum+= ((int)arr[j]-64);
				else
				{
					printf("Fail\n");
					fail = 1;
					break;
				}
			}
			if (fail==0)
				printf("%d\n", sum);
		}
	}
	return 0;
}
