#include<stdio.h>

main()
{
	int p , c , b , m, com,total ;
	float per;
	
	printf("To know  the Percentage and Grade\n\n\n");
	
	printf("Enter Mark of Physics = ");
	scanf("%d",&p);
	
	printf("Enter Mark ofChemistry = ");
	scanf("%d",&c);
	
	printf("Enter Mark of Biology = ");
	scanf("%d",&b);
	
	printf("Enter Mark of Mathematics = ");
	scanf("%d",&m);
	
	printf("Enter Mark of Computer = ");
	scanf("%d",&com);
	
	total=p+c+b+m+com;
	printf("Total Mark = %d",total);
	
	per=(total*100)/500;
	printf("\nPercentage : %f\n",per);
	
	if(per>=90)
	{
		printf("Grade A");
	}
	else if(per>=80)
	{
		printf("Grade B");
	}
	else if(per>=70)
	{
		printf("Grade C");
	}
	else if(per>=60)
	{
		printf("Grade D");
	}
	else if(per>=50)
	{
		printf("Grade E");
	}
	else if(per>=40)
	{
		printf("Grade F");
	}
	else{
		printf("Fail");
	}
}