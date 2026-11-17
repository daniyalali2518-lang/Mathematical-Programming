#include<stdio.h>
#include<math.h>

int main() {
	
    double a,b,c;
    double discriminant,root1,root2;
    

    printf("Enter coefficient a:");
    scanf("%lf",&a);
    
    printf("Enter coefficient b:");
    scanf("%lf",&b);
    
    printf("Enter coefficient c:");
    scanf("%lf",&c);


    if(a == 0) {
        printf("Error:'a' cannot be 0 in a quadratic equation.\n");
    }

    discriminant=(b*b)-(4*a*c);

    if(discriminant>=0){
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);

        printf("\nThe roots are real:\n");
        printf("Root 1=%.2lf\n",root1);
        printf("Root 2=%.2lf\n",root2);
    } 
    else{
        double realPart=-b/(2*a);
        double imaginaryPart=sqrt(-discriminant)/(2*a);

        printf("\nThe roots are complex and imaginary:\n");
        printf("Root 1 = %.2lf +%.2lfi \n",realPart,imaginaryPart);
        printf("Root 2 = %.2lf -%.2lfi \n",realPart,imaginaryPart);
    }

    return 0;
}

