#include<stdio.h>
#include<string.h>
main()
{
	char a[10],b[10];
	printf("enter string : ");
	scanf("%s",&a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("string is palindrome");
		
	}
	else{
		printf("string is not palindrome");
	}
	
}
