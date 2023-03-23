#include<stdio.h>
main()
{
	int num;
	printf("enter your choice : ");
	scanf("%d",&num);
	
	switch(num){
		case 1:
			printf("\t \t monday");
			break;
	    case 2:
	    	printf("\t \t tuesday");
	    	break;
	    case 3:
	    	printf("\t \t wednesday");
	    	break;
	    case 4:
	    	printf("\t \t thrusday");
	    	break;
	    case 5:
	    	printf("\t \t friday");
	    	break;
	    case 6:
	    	printf("\t \t saturday");
	    	break;
	    case 7:
	    	printf("\t \t sunday");
	    	break;
	    default:
	    	printf("you have invalid input");
	    	break;
	}
}
