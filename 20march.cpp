#include<stdio.h>
main()
{
 	printf("\t \t \t \t table making by for loop");
 	int a,b;
	printf("\n enter number to print table: ");
	scanf("%d",&a);
	for(b=1;b<=10;b++)
	{printf("%d*%d=%d \n",a,b,(a*b));
	}
	
	printf("\t \t \t \t chek,number is even or odd by for loop");
	
	int c,d,even=0,odd=0;
		printf("\n enter the number : ");
		scanf("%d",&d);
		
		printf("\n even numbers :");
	for(c=0;c<=d;c++)
	{
		if(c%2==0)
		{
		printf("\n %d",c);
		even++;
		}
    }
    printf("\n odd numbers :");
	for(c=1;c<=d;c++)
    {
    	if(c%2==1)
    	{printf("\n%d",c);
    	odd++;
		}
	}
    printf("\n total even number : %d",even);
    printf("\n total odd number : %d",odd);
    //positiv negativ
    printf("\n\t \t \t \t positive or negative");
    
    int e,f,pos,neg;
    for(f=1;f>=5;f++)
   // printf("\n enter the value : ");
     //   scanf("%d",&f);
		
    	printf("\n enter the number : ");
		scanf("%d",&e);
	{
    	
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
    
    return 0;
}
