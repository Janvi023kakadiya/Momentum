#include<stdio.h>

 main()
{
	char day;
	
	printf("Press M for Monday\n");
	printf("Press T for Tuesday\n");
	printf("Press w for Wednesday\n");
	printf("Press t for Thursday\n");
	printf("Press f for Friday\n");
	printf("Press S for Saturday\n");
	printf("Press s for Sunday\n\n\n");
	
	printf("Enter First Character = ");
	scanf("%c",&day);
	
	switch(day)
	{
		case 'M':
			printf("Monday");
		break;
		
		case 'T':
			printf("Tuesday");
		break;
		
		case 'w':
			printf("Wednesday");
		break;
		
		case 't':
			printf("Thursday");
		break;
		
		case 'f':
			printf("Friday");
		break;
		
		case 'S':
			printf("Saturday");
		break;
		
		case 's':
			printf("Sunday");
		break;
		
		default:
			printf("Enter Valid Character");
	}
}