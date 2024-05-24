#include <stdio.h>
#include <string.h>
void reverseString(char str[])
{
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}
int isPalindrome(char str1[])
{
    char str2[1000];
    strcpy(str2, str1);
    reverseString(str2);
    int res = strcmp(str1, str2);
    return res == 0; 
}
int main()
{
    char str1[1000];
    printf("Enter a String: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    if (isPalindrome(str1))
    {
        printf("This is a Palindrome.\n");
    } else
        {
        printf("This is not a Palindrome.\n");
        }
    return 0;
}
