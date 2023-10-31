#include<stdio.h>

main()
{
    int i,j,s;
    
    for(i=1;i<=5;i++){
        for(s=i;s<=4;s++){
            printf(" ");
        }
         for(j=i;j>=1;j--){
		printf("*");
	}
        for(j=i-1;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
     for(i=4;i>=1;i--){
        for(s=i;s<=4;s++){
            printf(" ");
        }
         for(j=1;j<=i;j++){
		printf("*");
	}
        for(j=2;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
