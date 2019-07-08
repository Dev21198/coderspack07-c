#include<stdio.h>
main()
{
	int a[50],n,i,max;
	printf("enter n");
	scanf("%d",&n);
	printf("enter the numbers : ");
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max=a[1];
	for(i=1;i<n;i++)
	{
		if(max>a[i+1])
		{
			max=a[i+1];	
		}
	}
	printf("minimum number is: %d  ",max);

	max=a[1];
	for(i=1;i<n;i++)
	{
		if(max<a[i+1])
		{
			max=a[i+1];	
		}
	}
	printf("\n maximum number is: %d  ",max);
}
