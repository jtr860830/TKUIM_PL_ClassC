//矩陣的乘法 
#include <stdio.h>

const int ROWSIZE1=2, COLSIZE1=3;
const int ROWSIZE2=3, COLSIZE2=2;

void input2array(int a1[][COLSIZE1], int a2[][COLSIZE2]);//輸入整數進入兩個二維陣列 
void output2array(int a1[][COLSIZE1], int a2[][COLSIZE2]);//印出兩個二維陣列 
void multiply(int a[][COLSIZE1], int b[][COLSIZE2], int c[][COLSIZE2]);//將陣列作為矩陣相乘 

int main(void) {
	int arr1[ROWSIZE1][COLSIZE1];
	int arr2[ROWSIZE2][COLSIZE2];
	int arr3[ROWSIZE1][COLSIZE2];
	
	input2array(arr1, arr2);
	output2array(arr1, arr2);
	multiply(arr1, arr2, arr3);
	
	puts("After multiply:");
	for (int i=0; i<ROWSIZE1; i++) {
		for (int j=0; j<COLSIZE2; j++) 
			printf("%4d ", arr3[i][j]);
		puts("");
	}//印出相乘的結果 
	
	return 0;
}

void input2array(int a1[][COLSIZE1], int a2[][COLSIZE2]) {
	puts("Input intergers into array1:");
	for (int i=0; i<ROWSIZE1; i++) {
		for (int j=0; j<COLSIZE1; j++) 
			scanf("%d", *(a1+i)+j);
	}
	
	puts("Input intergers into array2:");
	for (int i=0; i<ROWSIZE2; i++) {
		for (int j=0; j<COLSIZE2; j++) 
			scanf("%d", *(a2+i)+j);
	}
	
	return;
}

void output2array(int a1[][COLSIZE1], int a2[][COLSIZE2]) {
	puts("Array1");
	for (int i=0; i<ROWSIZE1; i++) {
		for (int j=0; j<COLSIZE1; j++) 
			printf("%4d ", a1[i][j]);
		puts("");
	}
	
	puts("Array2");
	for (int i=0; i<ROWSIZE2; i++) {
		for (int j=0; j<COLSIZE2; j++) 
			printf("%4d ", a2[i][j]);
		puts("");
	}
	
	return;
}

void multiply(int a[][COLSIZE1], int b[][COLSIZE2], int c[][COLSIZE2]) {
	int sum=0;
	
	for (int i=0; i<ROWSIZE1; i++) {
		for(int j=0; j<COLSIZE2; j++) {
			for(int k=0; k<COLSIZE1; k++) 
				sum+=a[i][k]*b[k][j];
			c[i][j]=sum;
			sum=0;
		}
	}
	
	return;
}
