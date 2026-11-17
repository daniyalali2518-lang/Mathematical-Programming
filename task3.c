#include<stdio.h>

int main(){
	
	int number1,number2,x;
	
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
	
	printf("Enter a First Number:");
	scanf("%d",&number1);
	
	printf("Enter a Second Number:");
	scanf("%d",&number2);
	
	x=number1;
	number1=number2;
	number2=x;
	
	printf("The Swap Value of Number1 is %d\n",number1);
	printf("The Swap Value of Number2 is %d\n",number2);
	
		
}
