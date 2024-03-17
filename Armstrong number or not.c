//2.WAP to find a given no is armstrong or not
#include<stdio.h>
void arms(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    arms(n);
}
void arms(int n)
{
 int temp, r, s=0;
 temp=n;
 while(n>0)
 {
     r=n%10;
     s=s+r*r*r;
     n=n/10;
 }
 if(temp==s)
    printf("Armstrong number\n");
 else
    printf("Not armstrong");
}
