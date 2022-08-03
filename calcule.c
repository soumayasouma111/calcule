#include<stdio.h>
#include<stdlib.h>

int main () 
{

    char operator;
    double a;
    double b;
    double c;
    double resultat;+



printf ("a:");
scanf("%lf" , &a );

printf ("b:");
scanf("%lf" , &b);

printf ("c:");
scanf("%lf" , &c);

 printf ("enter a operator:");
scanf("%s", &operator);

switch (operator){ 
    case'+':
        printf("resultat: %lf", a + b + c);
    break; 
    case '-':
         printf("resultat: %lf" , a - b - c);
    break;
    case '*':
         printf("resultat: %lf" , a * b * c);
    break;
    case'/':
        if (b==0 , c==0){
            printf("opérator is not valid", resultat);}
        else{
            printf("resultat: %lf" , a / b / c);}
    break;
    case 'q':
    printf("end of program");
    break;
}

return 0;


}