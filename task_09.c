#include<stdio.h>
main()
{
 		int Num,i,factorial=1;
  printf("Enter the number");
	scanf("%d",&Num);
	for (i=Num;i>1;i--)
	{ factorial=factorial*i;
	
	}
	printf("The factorial is %d ",factorial);
}
