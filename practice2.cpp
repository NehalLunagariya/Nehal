#include<stdio.h>
main()
{ 
	printf("\t \t \t \t rectangle perimeter");
	int a,b,c,perimeter;
	float r;
	printf("\n length : ");
	scanf("%d",&a);
	printf(" width  : ");
	scanf("%d",&b);
	printf(" hight  : ");
	scanf("%d",&c);
	printf("\n redius : ");
	scanf("%f",&r);
	
	printf(" rectangle perimeter :a*b   : %d",a*b);
	printf("\n\n \t \t \t \t cube perimeter");
	printf("\n cube perimeter  :a*b*c: %d",a*b*c);
	printf("\n\n \t \t \t \t circle perimeter");
	printf("\n circle perimeter  :2*pi*r : %f",2*3.14*r);
	printf("\n\n \t \t \t \t circle area");
	printf("\n circle area   :2*pi*r*r :%f",3.14*r*r);
	printf("\n \t \t \t \t intrest");
	printf("\n intrest I :prn/100 :%f",a*b*r/100);
	printf("\n \t \t \t conversion fahrenheit to celsius");
	float fer,cel;
	printf("\n fahrenheit : ");
	scanf("%f",&fer);
	printf(" celsius : ");
	scanf("%f",&cel);
	printf("\n fahrenheit to celsius : F=(f-32)*5/9 : %f",(fer-32)*5/9);
	printf("\n celsius to fahrenheit :C=(c*9/5)+32 : %f",(cel*9/5)+32);
	return 0;
	
}
