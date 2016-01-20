#include <stdio.h>
#include <string.h>
#define size 1000
int main()
{
	char a[size] ;
		int i ,sum,c=0;

			while(gets(a))
				{
						sum=0;
								if(a[0]=='0')
										{
													return 0;
															}
																	for(i=0;i<strlen(a);i++)
																			{
																					
																								if(a[i]>='A' && a[i]<='Z')
																											{
																															a[i]+=32;
																																		}
																																				
																																							if(a[i]<'a' || a[i]>'z')
																																										{
																																														c=1;
																																																		printf("Fail");
																																																						break;
																																																									}
																																																											
																																																													}
																																																															
																																																																if(c==1)
																																																																	{
																																																																			printf("\n");
																																																																					continue;
																																																																						}
																																																																							
																																																																								for(i=0;i<strlen(a);i++)
																																																																									{
																																																																											sum+=a[i]-96;
																																																																													
																																																																														}
																																																																															printf("%d\n",sum);
																																																																																}
																																																																																	
																																																																																	}
