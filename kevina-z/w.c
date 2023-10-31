#include<stdio.h>

main()
{
	int i;

	for(i=1;i<=6;i++)
	{
		if(i==5)
			printf("* *   * *");
		else if(i==4)
			printf("*   *   *");
		else
			printf("*\t*");
		printf("\n");
	}
}
