#include<stdio.h>
main()
{   
	printf("\t\t\t\t\t \tarithmetic operater\n");
	int a=12;
	int b=25;
	
	int addition=a+b;
	int subtraction=a-b;
	int multiplication=a*b;
	int devide=a/b;
	int reminder=a%b;
	
	printf("\t\ttotal=%d",addition);
	printf("\n\t\tsub=%d",subtraction);
	printf("\n\t\tmul=%d",multiplication);
	printf("\n\t\tdiv=%d",devide);
	printf("\n\t\trem=%d",reminder);
	
	printf("\n\t\t\t\t\t\t relational operator");
	
	if(a<b)
	{
		printf("\n\t \tA is grethen B is true");
	}
	else if(a>b)
	{
		printf("\n\t \t A is less then B is true");
	}
	else if(a==b)
	{
		printf("\n\t \tA is equal B");
	}
	
	if(a>=b)
	{
		printf("\n\t \ta is lessthen equal b is true" );
	}
	else
	{
		printf("\n\t \ta is greter equal b is true");
	}
	
	if(a!=b)
	{
		printf("\n\t \ta is not equal to b");
	}
	else
	{
			
			printf("\n\t\ta is equal to b");
	}
	
	printf("\n\t\t\t\t\t\t logical operator");
	
	if(a>=1 && a<=10)
	{
		printf("\n\t\t a is between 1 to 10");
	}
	else if(a>=11 && a<=20)
	{
		printf("\n\t\t a is between 11 to 20");
	}
	else 
	{
		printf("\n\t\t a is not brtween 1 to 20");
	}
	
	if(a>=100 || a<=10)
	{
		printf("\n\t\t a is between 1 to 10");
	}
	else 
	{
		printf("\n\t\t a is not between 1 to 10");
	}
	
	if(a!=b)
	{
		printf("\n\t \t a is not equal to b");
	}
	else
	{
	    printf("\n\t \t a is equal to b");	
	}
	    printf("\n\t\t\t\t\t\t conditional oparater");
	a!=b?printf("\n\t\t a is not equal to b"):printf("\n\t\t a is equal to b");
	
		 printf("\n\t\t\t\t\t\t increment decrement oparater");
		 printf("\n\t\t%d", ++a);
		 printf("\n\t\t%d", a--);
		 printf("\n\t\t%d", a++);
		 printf("\n\t\t%d", a);
		 
		 printf("\n\t\t\t\t\t\t bitwise oparater");
		 
		 printf("\n\t\t output=%d  %d\n",a,b);
	
	int ne=5,ha=7;
	printf("%d  this is & operator \n",ne&ha);
//	printf("%d",ne~ha);
	printf("%d  this is nor operator \n",ne|ha);
	printf("%d  this is right shift operator \n",ne>>ha);
	printf("%d  this is left shift operator \n",ne<<ha);		 
}
