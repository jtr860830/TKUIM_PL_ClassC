//404632407 ÁÂ¬ê¨Y 
#include<stdio.h>
#define SIZE 10

void input(void);
void selectionSort(void);
int target(int x);
int binarySearch(int target);
int arr[SIZE];

int main(void) {
	
	int tar, location;
	
	input();
	selectionSort();
	location=binarySearch(target(tar));
	if (location==-1) {
		puts("Not found");
	} else {
		printf("%s%d", "The location is in ", location+1);
	}
	return 0;
}

void input(void) {
	puts("Input 10 integer:");
	for (int i=0; i<SIZE; i++)
		scanf("%d", arr+i);
	return;	
}

void selectionSort(void) {
	
	int min, temp;
	
	for (int i=0; i<SIZE; i++) {
		min=i;
		for (int j=i+1; j<SIZE; j++) {
			if (arr[j]<arr[min]) min=j;
		}
		if (arr[min]==arr[i]) continue;
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	return;
}

int target(int x) {
	puts("Input a target value:");
	scanf("%d", &x);
	return x;
}

int binarySearch(int target) {
	
	int high=SIZE, low=0, mid;
	
	while (low<=high) {
		mid=(high+low)/2;
		if (target==arr[mid]) {
			return mid;
		} else if (target<arr[mid]) {
			high=mid-1;
		} else if (target>arr[mid]) {
			low=mid+1;
		}
	}
	return -1;
}
