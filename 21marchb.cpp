#include<stdio.h>
main()
 {
 int marks,i=1,pass=0,fail=0;
 while(i<=5)
 {
 	printf("\n enter marks :");
 	scanf("%d",&marks);
 	i++;
 	if(marks>=35)
 	{ printf(" you are pass");
 	 pass++;
	 }
	 else
	 {
	 	printf("you are fail");
	 	fail++;
	 }
 } 
 		printf("\n pass students are :%d",pass);
 		printf("\nfail students are :%d",fail);
}
