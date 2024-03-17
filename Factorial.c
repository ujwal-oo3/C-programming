#include<stdio.h>
void fact(int);
int main()
{
    int n;
    printf("Enter a number=");
    scanf("%d", &n);
    fact(n);
}
void fact(int n)
{
    int i;float f=1;
    if(n>=0)
    {
        for(i=n; i>0; i--)
        {
            f=f*i;
        }
        printf("%d!=%f", n,f);
    }
    else
        printf("Invalid number");

}
