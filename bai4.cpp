#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverse(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    
    reverse(str, 0, len - 1);
    
    printf("Chuoi sau khi dao nguoc: %s", str);
    
    return 0;
}

