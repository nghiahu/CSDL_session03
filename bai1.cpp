#include<stdio.h>
int factorial(int n){
	if(n == 0){
		return 1;
	}
	return n * factorial(n - 1);
}
int main(){
	int n; 
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	if(n < 0){
		printf("n không hop le!");
		return 0;
	}
	printf("Giai thua cua %d là: %d", n , factorial(n));
	return 0;
}

