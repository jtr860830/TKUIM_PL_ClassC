#include<stdio.h> 

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
