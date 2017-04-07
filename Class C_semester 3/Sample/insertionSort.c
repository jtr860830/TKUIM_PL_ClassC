#include<stdio.h>
#define SIZE 10

void swap(int* x, int* y);
void insertionSort(int* a);

int main(void) {
    int arr[SIZE];
    for (int i=0; i<SIZE; i++) 
        scanf("%d", arr+i);
    insertionSort(arr);
    for (int i=0; i<SIZE; i++)
        printf("%d ", *(arr+i));
    return 0;
}

void insertionSort(int* a) {
    int s, i, j;
    for (i=1; i<SIZE; i++) {
    	s=a[i];
    	for (j=i-1; j>=0 && a[j]>s; j--) 
    		a[j+1]=a[j];
    	a[j+1]=s;
	}
    
    return;
}

