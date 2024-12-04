#include<stdio.h>
#include <string.h>
#include <ctype.h>
int palindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (tolower(str[start]) != tolower(str[end])) {
        return 0;
    }
    return palindrome(str, start + 1, end - 1);
}

int main(){
	char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    if (palindrome(str, 0, len - 1)) {
        printf("Palindrome valid");
    } else {
        printf("Palindrome invalid");
    }
	return 0;
}

