#include<stdio.h>

void input_ab(int* arr1, int* arr2, int row1, int col1, int row2, int col2);
void multiply(int* arr1, int* arr2, int* arr3, int row1, int col1, int row2, int col2);
void output_c(int* arr, int row, int col);

int main(void) {
	int a[3][2];
	int b[2][4];
	int c[3][4];
	
	input_ab((int*)a, (int*)b, 3, 2, 2, 4);
	multiply((int*)a, (int*)b, (int*)c, 3, 2, 2, 4);
	output_c((int*)c, 3, 4);
	
	return 0;
}

void input_ab(int* arr1, int* arr2, int row1, int col1, int row2, int col2) {
	puts("input array a:");
	for (int i=0; i<row1; i++)
		for (int j=0; j<col1; j++) 
			scanf("%d", arr1+col1*i+j);
	
	puts("input array b:");
	for (int i=0; i<row2; i++)
		for (int j=0; j<col2; j++) 
			scanf("%d", arr2+col2*i+j);
			
	return;
}

void multiply(int* arr1, int* arr2, int* arr3, int row1, int col1, int row2, int col2) {
	int sum=0;
	
	for (int i=0; i<row1; i++) {
		for (int j=0; j<col2; j++) {
			for (int k=0; k<col1; k++) 
				sum+=*(arr1+col1*i+k) * *(arr2+col2*k+j);
			*(arr3+i*col2+j)=sum;
			sum=0;
		}
	}
	return;
}

void output_c(int* arr, int row, int col) {
	puts("array c is :");
	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) 
			printf("%d ", *(arr+i*col+j));
		puts("");
	}
	return;
}