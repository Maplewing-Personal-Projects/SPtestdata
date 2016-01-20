#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char st[20],cs[1005][20];
	char c; 
	int i,j,p;
	int n; 
	//printf("Input student's number\n");
	scanf("%d",&n);
	gets(cs[0]);// get the \n ,otherwise next gets will cause error
	//Notice, there might be problem when use scanf+gets

	//printf("Input students' name:\n");

	for(i=0;i<n;i++)
		gets(cs[i]); // by row 

	//printf("\n");

	//int i,j;
	for(j=0; j<n; j++){
		for( i = 0 ; cs[j][i] != '\0' ; i++ ){
			cs[j][i] = tolower(cs[j][i]);
		}	
	}	

	for( i = 0; i < n; i++ ){       // put order 
		p=i;						// position
		strcpy(st,cs[i]); 			// copy cs[i] to st : string temp 
		for( j = i+1; j < n ; j++)
			if(strcmp(cs[j],st)<0) {// if cs[j] < st, 
				p=j;strcpy(st,cs[j]);  	// small string copy to st , mark position j to p 
			}						// find the smallest position at p
		if( p != i )				// if position is not this same row
		{					 	// exchange the row 
			strcpy(st,cs[i]);
			strcpy(cs[i],cs[p]);
			strcpy(cs[p],st);
		}

		//puts(cs[i]);
	}

	for(j=0; j<n; j++){
		for( i = 0 ; cs[j][i] != '\0' ; i++ ){
			if(i==0)
				cs[j][i] = toupper(cs[j][i]);
		}	
	}	

	for(i=0;i<n;i++){
		printf("%d: %s\n",i+1,cs[i]);
	}


	return 0;
}
