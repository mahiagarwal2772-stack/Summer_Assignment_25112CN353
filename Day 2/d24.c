#include<stdio.h>
 int main()
 {
    int r=0,d,n,n1;
    printf("Enter a number");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    } 
    if(r==n1)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }
    return 0;
 }