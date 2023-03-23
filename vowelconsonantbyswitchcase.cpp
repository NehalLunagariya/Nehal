#include<stdio.h>
main()
{	
	printf("\t \t \t \t vowel consonant by switch case \n");
	char ch;
	printf("enter any later of alphabet :");
	scanf("%c",&ch);
	switch(ch)
	{
		case'a':
			printf("\t \t \t vowel");
			break;
		case'e':
			printf("\t \t \t vowel");
			break;
		case'i':
			printf("\t \t \t vowel");
			break;
		case'o':
			printf("\t \t \t vowel");
			break;
		case'u':
			printf("\t \t \t vowel");
			break;
		case'A':
			printf("\t \t \t vowel");
			break;
		case'E':
			printf("\t \t \t vowel");
			break;
		case'I':
			printf("\t \t \t vowel");
			break;
		case'O':
			printf("\t \t \t vowel");
			break;
		case'U':
			printf("\t \t \t vowel");
			break;
		default:
			printf("\t \t \t consonant");
			
	}
	return 0;
}
