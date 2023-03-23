#include<stdio.h>
main()
 { printf("\t \t \t \t for loop");
 int marks,j,pass=0,fail=0;
	for(j=1;j<=5;j++)
	{
		printf("\n enter the marks : ");
		scanf("%d",&marks);
		if(marks>=35)
		{ printf("you are valid for next stag");
		 pass++;
		}
		else
		{printf("you are invalid for next stag");
		fail++;
		}
	}
	printf("\n\n addition of pass : %d",pass);
	printf("\n addition of fail : %d",fail);
}
