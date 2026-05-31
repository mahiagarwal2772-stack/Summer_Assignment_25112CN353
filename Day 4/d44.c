#include<stdio.h>
int power(int base, int exp){
    int result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
int main() {
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);
    for(int n = start; n <= end; n++) {
        int temp = n, digits = 0, sum = 0;
        while(temp) {
            digits++;
            temp /= 10;
        }
        temp = n;
        while(temp) {
            int rem = temp % 10;
            sum += power(rem, digits);
            temp /= 10;
        }
        if(sum == n)
            printf("%d ", n);
    }
    return 0;
}