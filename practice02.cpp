#include<stdio.h>
main()
{   printf("\t \t \t \t even-odd");
	int i;
	printf("\n i : ");
	scanf("%d",&i);
	if(i%2==0)
	{
		printf(" this number is even");
		printf("\n this number is devide by 2");
	}
	else
	{
		printf("this number is odd");
		printf("\n this number is not devide by 2");
	}
	if(9<i&&i<100)
	{
		printf("\n this number is two digit");
	}
	else
	{
		printf("\n this number is not two digit");
	}
	printf("\n \t \t \t \t average");
	int a,b,c;
	printf("\n enter the number I : ",a);
	scanf("%d",&a);
	printf(" enter the number II : ",b);
	scanf("%d",&b);
	printf(" enter the number III : ",c);
	scanf("%d",&c);
	printf("average of 3 numbers : (a+b+c)/3: %d",(a+b+c)/3);
}
