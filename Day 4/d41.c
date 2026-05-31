#include<stdio.h>
int main(){
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printf("%d\t%d ", a, b);
    for(int i = 3; i <= n; i++) {
        c = a + b;
        printf("\t%d ", c);
        a = b;
        b = c;
    }
    return 0;
}