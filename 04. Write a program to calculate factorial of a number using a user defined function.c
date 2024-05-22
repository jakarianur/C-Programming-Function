#include<stdio.h>

int factorial(int num1) {
    int i, fac = 1;
    for (i = 1; i <= num1; i++) {
        fac *= i;
    }
    return fac;
}#include <stdio.h>
#include <string.h>

int isPalindrome(char str1[]) {
    char str2[1000];
    strcpy(str2, str1);
    strrev(str2);
    int res = strcmp(str1, str2);
    return res == 0; // Returns 1 if strings are equal, indicating a palindrome
}

int main() {
    char str1[1000];

    printf("Enter a String: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline character from input
    str1[strcspn(str1, "\n")] = '\0';

    if (isPalindrome(str1)) {
        printf("This is Palindrome.\n");
    } else {
        printf("This is not Palindrome.\n");
    }
