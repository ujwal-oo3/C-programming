#include<stdio.h>
void pat(n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    pat(n);
}
void pat(int n)
{
    int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("*");
        }
        printf("\n");

    }
}
