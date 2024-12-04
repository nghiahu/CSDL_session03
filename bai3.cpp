#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}

int main() {
    int n;
    printf("Nhap so lan hien thi so Fibonacci: ");
    scanf("%d", &n);
    printf("Chuoi Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}

