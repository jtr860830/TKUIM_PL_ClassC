//404632407 ÁÂ¬ê¨Y 
#include<stdio.h>

void input(int a[], int n);
void output(int a[], int n);
void reverse(int a[], int n);

int main(void) {
	
	unsigned int a=10, b=11;
	int list1[a], list2[b];
	
	input(list1, a);
	output(list1, a);
	reverse(list1, a);
	output(list1, a);
	
	input(list2, b);
	output(list2, b);
	reverse(list2, b);
	output(list2, b);
	
	return 0;
} 

void input(int a[], int n) {
	printf("%s%d%s", "Input ", n, " integers into array list:");
	for (int i=0; i<n; i++)
		scanf("%d", a+i);
	return;
}

void output(int a[], int n) {
	for (int i=0; i<n; i++)
		printf("%d ", *(a+i));
	printf("\n");
	return;
}

void reverse(int a[], int n) {
	int temp;
	for (int i=0; i<(n/2); i++) {
		temp=a[i];
		a[i]=a[n-(i+1)];
		a[n-(i+1)]=temp;
	}
	return;
}
