#include<stdio.h>
#define SIZE 10

void swap(int* x, int* y);
void selectionSort(int* a);

int main(void) {
    int arr[SIZE];
    for (int i=0; i<SIZE; i++) 
        scanf("%d", arr+i);
    selectionSort(arr);
    for (int i=0; i<SIZE; i++)
        printf("%d ", *(arr+i));
    return 0;
}

void selectionSort(int* a) {
    int min;
    for (int i=0; i<SIZE-1; i++) {
        min=i;
        for (int j=i+1; j<SIZE; j++) 
            if (a[j]<a[min]) min=j;
        if(min!=i) swap(a+min, a+i); 
    }
    return;
}

void swap(int* x, int* y) {
	*x^=*y^(*y=*x);
}
