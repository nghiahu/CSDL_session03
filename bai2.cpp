#include<stdio.h>
int sum(int n, int m){
	if(n == m){
		return n;
	}
	return n + sum(n + 1, m);
}
int main(){
	int n,m;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	printf("Nhap vao m: ");
	scanf("%d", &m);
	if(m < n){
		printf("m phai lon n");
		return 0;
	}
	printf("Tong day so tu %d cho den %d: %d",n,m,sum(n,m));
	return 0;
}

