#include<stdio.h>
#define SIZE 10

void swap(int* x, int* y);
void getIntegers(int *res,int length);
void selectionSort(int* arr,int length);
int getTarget(void);
int binarySearch(int* arr, int length, int target);

int main(void) {
	int arr[SIZE];
	getIntegers(arr, SIZE);
	selectionSort(arr, SIZE);
	int target = getTarget();
	int res = binarySearch(arr, SIZE, target);
	if(res==-1)
		printf("Not Found!\n");
	else
		printf("%s%d", "The location is in ", res+1);
} 

void swap(int* x, int* y) { *x^=*y^(*y=*x); }

void getIntegers(int *res,int length) {
	printf("Enter %d Integers:\n",length);
	for(int i=0; i<length; i++)
		scanf("%d",&res[i]);
}

void selectionSort(int* arr,int length) {
	int now = 0;
	while ( now < length-1 ) {
		int minIndex = now;
		for(int i=now+1; i<length; i++)
			if(arr[i] < arr[minIndex])minIndex = i;
		swap(&arr[now++],&arr[minIndex]);
	}
}

int getTarget(void) {
	int input;
	puts("Input a target value: ");
	scanf("%d",&input);
	return input;
}

int binarySearch(int* arr, int length, int target) {
	int l=0, r=length-1, m;
	
	while ( l<=r ) {
		m = (l+r)/2;
		if (target == arr[m]) 
			return m;
		if (arr[m]>target)
			r = m-1;
		else
			l = m+1;
	}
	return -1;
}
