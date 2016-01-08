#include <stdio.h>

int main()
{
	double a,b,ans;
		int n;
			scanf("%lf%lf",&a,&b);
	scanf("%d", &n);
switch(n)
	{
			case 1:
						ans=a+b;
									break;
											case 2:
														ans=a-b;
																	break;
																			case 3:
																						ans=a*b;
																									break;
																											case 4:
																														ans=a/b;
																																	break;
																																			default:
																																						printf("無此功能\n");
																																									return 0;
																																										}
																																											printf("%lf\n", ans);
																																												return 0;
																																												}

