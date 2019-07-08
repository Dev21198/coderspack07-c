#include<stdio.h>
struct book{
	char title[50];
	char author[50];
	char genre[20];
	
};
main()
{ 
	
 struct book Book1={"Maths","arryabhatta","scifi"};
 printf("The structure data is : %s %s %s ", Book1.title,Book1.author,Book1.genre);
	
}
