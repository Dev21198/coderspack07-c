#include<stdio.h>
main()
{ 
 int Num,Rem,i,Quo;
 printf("Enter any number : ");
 scanf("%d", &Num);
 for (i=0;i<5;i++)
 {
 	Rem= Num%10;
 	printf("%d",Rem);
 	Quo= Num/10;
 	Num=Quo;
 }
 
}
