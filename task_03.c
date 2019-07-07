#include<stdio.h>
main(){
	int sub1,sub2,sub3,sum;
	float avg;
	printf(" \n enter subject1 marks \n ");
	scanf("%d",&sub1);
	printf("\n enter subject2 marks \n ");
	scanf("%d",&sub2);
	printf(" \n enter subject3 marks\n");
	scanf("%d",&sub3);
sum=sub1+sub2+sub3;
avg=sum/3;
printf("The sum of numbers is %d",sum);
printf("The average of numbers %f",avg);

}
