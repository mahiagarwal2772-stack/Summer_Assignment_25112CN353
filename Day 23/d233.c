#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, count;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Find lengths
    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 != len2) {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; i < len1; i++) {
        count = 0;

        for(j = 0; j < len2; j++) {
            if(str1[i] == str2[j]) {
                count = 1;
                break;
            }
        }

        if(count == 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}