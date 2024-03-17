//4. WAP to solve a quadratic Equation
#include<stdio.h>
int main()
{
    float a, b, c, D, x1, x2;
    printf("Enter the value of a=");
    scanf("%f",&a);
    printf("\nEnter the value of b=");
    scanf("%f", &b);
    printf("\nEnter the value of c=");
    scanf("%f", &c);
    D=pow(b,2)-4*a*c;
    if(D>0)
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("Roots are %f and %f", x1, x2);
    }
    else if(D==0)
    {
        x1=-b/(2*a);
        printf("Root is %f", x1);
    }
    else
    {
        x1=(-b+sqrt(-D))/(2*a);
        x2=(-b-sqrt(-D))/(2*a);
        printf("Roots are %fi and %fi", x1, x2);
    }
}
