#include<stdio.h>
#define SIZE 10

void swap(int* x, int* y);
void bubbleSort(int* a);

int main(void) {
    int arr[SIZE];
    for (int i=0; i<SIZE; i++) 
        scanf("%d", arr+i);
    bubbleSort(arr);
    for (int i=0; i<SIZE; i++)
        printf("%d ", *(arr+i));
    return 0;
}

void bubbleSort(int* a) {
    for (int i=0; i<SIZE-1; i++)
    	for (int j=0; j<SIZE-i-1; j++) 
    		if (a[j]>a[j+1]) 
				swap(a+j, a+j+1);
    		
    return;
}

void swap(int* x, int* y) {
	*x^=*y^(*y=*x);
}
