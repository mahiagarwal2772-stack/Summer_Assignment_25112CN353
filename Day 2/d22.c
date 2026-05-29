 #include<stdio.h>
 int main()
 {
    int r=0,d,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("Reversed number is %d",r);
    return 0;
 }