#include <stdio.h>

int sumArray(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n-1] + sumArray(arr, n-1);
}

int main() {
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
    printf("Tong cac phan tu trong mang là: %d", sumArray(arr,n));
    
    return 0;
}

