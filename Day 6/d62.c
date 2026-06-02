#include<stdio.h>
int main(){
    int binary, decimal = 0, place = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * place;
        binary /= 10;
        place *= 2;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}