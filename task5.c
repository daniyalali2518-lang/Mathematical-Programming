#include<stdio.h>

int main(){
	
	
    int totalpennies=368;
    int quarters,dimes,nickels,pennies,remainder;
    
    printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");

    quarters=totalpennies/25;
    remainder=totalpennies%25;

    dimes=remainder/10;
    remainder=remainder%10;

    nickels=remainder/5;
    pennies=remainder%5;


    printf("Total Pennies:%d\n",totalpennies);
    printf("Optimal oin Distribution (Least Coins):\n");
    printf("Quarters 25c: %d\n",quarters);
    printf("Dimes 10c: %d\n",dimes);
    printf("Nickels 5c:%d\n",nickels);
    printf("Pennies 1c:%d\n",pennies);
    
}

