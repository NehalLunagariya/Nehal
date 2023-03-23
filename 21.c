#include<stdio.h>
main()
{
	 int e,i,pos,neg;
	
    for(i=1;i<=5;i++)
    {		printf("\n enter the number : ");
		  scanf("%d",&e);
	
    if(e>0)
	 {  
	    printf("this number is positive :");
     	pos++;
	  }
	else
	{
	  	printf("this number is negative :");
        neg++;
    }
	}
   
}
