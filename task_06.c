// code for 4 digit amstrong number

#include<stdio.h>
main()
{ int Num,Temp,Rem,result=0,Quo; 
 printf("Enter the number : ");
 scanf("%d",&Num);
 Temp=Num;
 while(Num>0)
 { Rem=Num%10;
   result=result+(Rem*Rem*Rem*Rem);
   Quo=Num/10;
   Num=Quo;
 }
 printf(" \n %d \n ",result);
 if(Temp==result)
 {
 	printf(" \n The given number is amstrong number");
 	
 }
 else { 
 printf(" \n The given number is not a amstrong number");
 }
}
