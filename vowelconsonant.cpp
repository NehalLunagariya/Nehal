#include<stdio.h>
main()
{	
    printf("\t \t \t \t calculator by switch case");
	int a,b,c;
	char ch;
	printf("\n enter(+,-,*,/,%) : ");
	scanf("%c",&ch);
	fflush(stdin);
	printf("\n enter your no.: ");
	scanf("%d",&a);
	printf("\n enter your no.: ");
	scanf("%d",&b);
	
	switch (ch)
	{case '+':
		c=a+b;
		printf("addition = %d",c);
		break;
		
	case '-':
		c=a-b;
		printf("subtrection = %d",c);
		break;
		
	case '/':
		c=a/b;
		printf("devide is = %d",c);
		break;
		
	case '*':
		c=a*b;
		printf("multiplication is =%d",c);
		break;
		
	case '%':
		c=a%b;
		printf("reminder is = %d",c);
		break;
	default:
		printf("\n invalid operation.");
	}
	
	return 0;
}


