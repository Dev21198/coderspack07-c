//code for table
#include<stdio.h>
main()
{ 	int Num,Table,i;
	printf("Enter a number : ");
	scanf("%d",&Num);
	
	for(i=1;i<=10;i++)
	{
		Table=Num*i;
		printf("\n %d \n ",Table);
	}
}
