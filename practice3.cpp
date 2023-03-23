#include<stdio.h>
main()
{   printf("\t\t \t \t alphabet or number");
	char c;
	printf("\n enter anything : ");
	scanf("%c",&c);
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	{
		printf("%c it is alphabet",c);
	}
	else if(c>='0' && c<='9')
	{
		printf("%c it is  number",c);
	}
	else
	{
		printf("it is special character");
	}
	
	//cases
	printf("\n \t\t \t \t upper case or lower case");
	char i;
	printf("\n enter character : ");
	scanf("%s",&i);
	if (i>='a' && i<='z')
	{
		printf("%c it is lower case",i);
	}
	
	else if (i>='A' && i<='Z')
	{
		printf("%c it is upper case",i);
	}
	else
	{
		printf("it is not character");
	}
	
	
}
