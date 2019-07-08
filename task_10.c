#include<stdio.h>
main()
{	int Num,i,j;
	printf(" enter the number :");
	scanf("%d",&Num);
	for(i=Num;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
}
