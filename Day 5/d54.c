#include<stdio.h>
int main(){
    int n, largest = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        while(n%i==0){
            largest = i;
            n/=i;
        }
    }
    if(largest!=0){
        printf("Largest prime factor is: %d", largest);
    }
    else{
        printf("No prime factors found.");
    }
    return 0;
}