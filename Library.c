//3.
#include<stdio.h>
int main()
{
    int d;
    float F;
    printf("Enter the no. of days delayed=");
    scanf("%d",&d);
    if(d<=5)
    {
        F=d*0.5;
        printf("Fine in rupees=%f", F);
    }
    else if(d<=10)
    {
        F=5*(0.5)+(d-5)*1;
        printf("Fine in rupees=%f", F);
    }
    else if(d<=30)
    {
        F=5*(0.5)+5*1+(d-10)*5;
        printf("Fine in rupees=%f", F);
    }
    else
    {
        printf("Your membership has been canceled\n");
    }
}
