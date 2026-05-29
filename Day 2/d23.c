#include<stdio.h>
int main()
{
    int i,n,p=1,d;
    printf("Enter the number");
    scanf("%d",&n);
        while(n!=0)
        {
            d=n%10;
            p=p*d;
            n=n/10;
        }
        printf("product of digits is %d",p);
        return 0;
}