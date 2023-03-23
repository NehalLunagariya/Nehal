#include<stdio.h>
main()
{   printf("\t \t \t \t \t \t mark sheet use of if else");
	char name[20];
	printf(" \n\t\t enter your name =");
	fflush(stdin);
	scanf("%s",&name);
	   	
   	int maths;
   	printf("\n \t \t please enter maths marks = ");
   	scanf("%d",&maths);
   	maths>35?printf("\t \t you are pass"):printf("\t \t you are fail");
   	int science;
   	printf("\n \t \t please enter science marks = ");
   	scanf("%d",&science);
   	science>35?printf("\t \t  you are pass"):printf("\t \t you are fail");
   	int english;
   	printf("\n \t \t please enter english marks = ");
   	scanf("%d",&english);
   	english>35?printf("\t \t  you are pass"):printf("\t \t you are fail");
   	int hindi;
   	printf("\n \t \t please enter hindi marks = ");
   	scanf("%d",&hindi);
   	hindi>35?printf("\t \t you are pass"):printf("\t \t you are fail");
	int gujrati;
   	printf("\n \t \t please enter gujrati marks =");
   	scanf("%d",&gujrati);
   	gujrati>35?printf("\t \t  you are pass"):printf("\t \t you are fail");
   	int socialscience;
   	printf("\n \t \t please enter social science marks = ");
   	scanf("%d",&socialscience);
   	socialscience>35?printf("\t \t  you are pass"):printf("\t \t you are fail");
   	int art;
   	printf("\n \t \t please enter art marks = ");
   	scanf("%d",&art);
   	art>35?printf("\t \t you are pass"):printf("\t \t you are fail");
	
   	int total=art+socialscience+gujrati+hindi+english+science+maths;
   	printf("\n \t \t total=%d",total);
   	
   	
   	if(total>600 && total<=700)
	{
		printf("\n \t \t \t \t you have gread A");
    }
    else if(total>500 && total<=600)
    {
		printf("\n \t \t \t \t you have gread B");
    }
    else if(total>=455 && total<=500)
	{
		printf("\n \t \t \t \t you have gread C");
	}
	
	else if(total>0 && total<=455)
	{
		printf("\n \t \t \t \t you are fail");
	}
	else
	{
		printf("\n \t \t \t \t you enter invalid marks");
	}
}
