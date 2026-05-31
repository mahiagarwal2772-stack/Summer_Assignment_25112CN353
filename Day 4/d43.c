#include<stdio.h>
int power(int base, int exp){
    int result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
int main(){
    int n,count=0,sum=0,n1,rem;
    printf("Enter a number: ");
    scanf("%d",&n); 
    n1=n;
    while(n>0){
        count++;
        n=n/10;
    }  
    printf("The number of digits in the number is: %d\n",count);
    n=n1;
    while(n>0){
        rem=n%10;
        sum=sum+power(rem,count);
        n=n/10;
    }
    if(sum==n1){
        printf("The number is an Armstrong number.");
    }    
    else{
        printf("The number is not an Armstrong number.");
    }
    return 0;
}