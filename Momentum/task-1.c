#include<stdio.h>
main(){
	
	char ch;
	
	printf("Enter any of the Character=");
	scanf("%c",&ch);
	
	if(ch >='a' && ch <='z'){
	printf("%c is an Alphabet",ch);
	} else if(ch>='0'&& ch<='9'){
		printf("%c is a Digit");
	}
	else{
		printf("%c is a Special Charcter");
	}
}