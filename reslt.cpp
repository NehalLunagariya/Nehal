#include<stdio.h>
main()
{
	char name[20];
	printf(" \t\t\t\t\t\t enter your name =");
	fflush(stdin);
	scanf("%s",&name);
	   	
   	int maths=5;
   	printf("\n \t \t please enter maths marks = ");
   	scanf("%d",&maths);
   	
   	int science=85;
   	printf("\n \t \t please enter science marks = ");
   	scanf("%d",&science);
   	
   	int english=80;
   	printf("\n \t \t please enter english marks = ");
   	scanf("%d",&english);
   	
   	int hindi=83;
   	printf("\n \t \t please enter hindi marks = ");
   	scanf("%d",&hindi);
   	
   	int gujrati=60;
   	printf("\n \t \t please enter gujrati marks =");
   	scanf("%d",&gujrati);
   	
   	int socialscience=57;
   	printf("\n \t \t please enter social science marks = ");
   	scanf("%d",&socialscience);
   	
   	int art=90;
   	printf("\n \t \t please enter art marks = ");
   	scanf("%d",&art);
   	
   	int total=art+socialscience+gujrati+hindi+english+science+maths;
   	printf("\n \t \t total=%d",total);
   	
   	
   	float percentage = ((total*7)/100);
   	
   	printf("\n \t \t ============================");
   	printf("\n \t \t Your total percentage is =%0.2f",percentage);
   	


}
