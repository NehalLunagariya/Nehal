#include<stdio.h>
main()
{
	printf("\t \t \t \t prime number");
	int i ,n,count=0;
	printf("\n enter the number : ");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;++i)
	{if(n%i==0)
	{count=1;
	break;
	}
	}
	if(count==0)
	{
	 printf("%d is prime number",n);
	}
	else
	{
		printf("%d is not prime number",n);
	}
	// using while loop
	
	printf("\n \t \t \t \twhile loop");
	int j=2,k,num=0;
	printf("\n enter the number : ");
	scanf("%d",&k);
	
	while(j<=k/2)
	{if(k%j==0)
	{num=1;
	break;
	}
	j++;
	}
	if(num==0)
	{
	 printf("%d is prime number",k);
	}
	else
	{
		printf("%d is not prime number",k);
	}
	
	 
}
