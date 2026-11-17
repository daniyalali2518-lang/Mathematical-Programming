#include<stdio.h>

int main(){
	
	float salary,tax,taxamount,netincome;
	
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
	
	printf("Enter Your total Salary:");
	scanf("%f",&salary);
	
	printf("Enter A tax:");
	scanf("%f",&tax);
	
	taxamount=(tax/100)*salary;
	
	netincome=salary-taxamount;
	
	printf("Your Taxamount is: %.2f\n",taxamount);
	printf("Your Netincome is: %.2f",netincome);
	
			
}
