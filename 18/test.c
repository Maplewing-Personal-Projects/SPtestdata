#include <stdio.h>
#define LENGTH	1001

int main()
{
	char str[LENGTH], alphabet[26]={0}, b[LENGTH];
	int j, n;

	//	scanf("%s",str);
	gets(str);

	for(j=0;j<LENGTH;j++)
	{
		if(str[j]=='\0')
		{
			break;
		}else if ((str[j]>=65) && (str[j]<=90))
		{
			n = str[j]-65;
			alphabet[n]++;
		}else if ((str[j]>=97) && (str[j]<=122))
		{
			n = str[j]-97;
			alphabet[n]++;
		}else
		{
			break;
		}

	}	
	for(j=0; j<26; j++)
	{
		printf ("%c: %d\n", 97+j,alphabet[j]);
	}


	return 0;
}
