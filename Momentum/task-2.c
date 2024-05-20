#include<stdio.h>

main(){
	int j;
	printf("Check a number is Even or Odd\n\n");
	
	printf("Enter Number : ");
	scanf("%d",&j);
	
	if((j/2)*2 == j)
	{
		printf("This Number Is Even");
	}
	else{
		printf("This Number Is Odd");
	}
}
