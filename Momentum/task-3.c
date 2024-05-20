#include<stdio.h>
 main()
{
	int a,b,c,d;
	
	
	
	printf("Enter number A = ");
	scanf("%d",&a);
	
	printf("Entre Number B = ");
	scanf("%d",&b);
	
	printf("Enter Number C = ");
	scanf("%d",&c);
	
	printf("Enter Number D = ");
	scanf("%d",&d);
	
	if(a > b && a > c && a > d)
	{
		printf("\nA is Big");
	}
	else{
		if(b > a && b >c && b > d)
		{
			printf("B is Big");
		}
		else{
			if(c > a && c > b && c > d)
			{
				printf("C is  Big");
			}
			else
			{
				if(d > a && d > b && d > c)
				{
					printf("D is Big");
				}
				else{
					printf("Enter Valid Number");
				}
			}
		}
	}
}
