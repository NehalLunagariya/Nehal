#include<stdio.h>
main()
{   
	printf("\t\t \tarithmetic operater\n");
	int a=4;
	int b=4;
	printf("Please Enter Values of A =");
	scanf("%d",&a);
	printf("Please Enter Values of B =");
	scanf("%d",&b);
	
	int addition=a+b;
	int subtraction=a-b;
	int multiplication=a*b;
	int devide=a/b;
	int reminder=a%b;
	
	printf("total=%d",addition);
	printf("\nsub=%d",subtraction);
	printf("\nmul=%d",multiplication);
	printf("\ndiv=%d",devide);
	printf("\nrem=%d",reminder);
	
	printf("\t\t\t relational operator");
	
	if(a<b)
	{
		printf("\n A is grethen B is true");
	}
	else if(a>b)
	{
		printf("\n A is less then B is true");
	}
	else if(a/b==0)
	{
		printf("\n A is equal B");
	}
	
	if(a>=b)
	{
		printf("\n a is lessthen equal b is true" );
	}
	else
	{
		printf("\n a is greter equal b is true");
	}
	
	if(a!=b)
	{
		printf("\n a is not equal to b");
	}
	else
	{
			printf("\n a is equal to b");
	}
	
	
}
