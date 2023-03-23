#include<stdio.h>
main()
{
   	int total;
   	
   	printf("\n \t \t total=");
   	scanf("%d",&total);
   	if(total<100 && total>0)
   	{		   
	if(total>90 && total<=100)
	{
		printf("\n \t \t \t \t A++ grade");
    }
    else if(total>80 && total<=90)
	{
		printf("\n \t \t \t \t A+");
	}
	else if(total>70 && total<=80)
	{
		printf("\n \t \t \t \t B");
	}
	else if(total>60 && total<=70)
	{
		printf("\n \t \t \t \t C");
	}
	else if(total>35 && total<=60)
	{
		printf("\n \t \t \t \t D");
	}
	else{
		printf("You are fail");
	}
   }
	else
	{
		printf("\n \t \t \t \t invalid input");
	}

}
