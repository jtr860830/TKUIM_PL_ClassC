#include <stdio.h>
#include <stdbool.h>

int monthDays(int, int);
int spaceDays(int, int);

int main(void) {
	int m, y, d, space;
	printf("%s","Input an year:");
	scanf("%d", &y);
	printf("%s","Input a month:");
	scanf("%d", &m);
	space = spaceDays(m, y);
	
	printf("\n%4s%4s%4s%4s%4s%4s%4s\n", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat");
	for (int i = 1; i <= space + monthDays(m, y); i++) {
		if (i <= space) 
			printf("%4s"," ");
		else 
			printf("%4d", i-space);
		
		if (i%7 == 0) 
			printf("\n");
	}
	
	return 0;
}

int monthDays(int x, int y) {
	int d;
	
	if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) 
		d = 31;
	else if (x == 4 || x == 6 || x == 9 || x == 11) 
		d = 30;
	else if ( (x == 2 && y%4 == 0 && y%100 != 0) || y%400 == 0) 
		d = 29;
	else if (x == 2) 
		d = 28;
	
	return d;
}

int spaceDays(int x, int y) {
	int year = 1, month = 1, space = 1, d;
	
	while (true) {
		d = monthDays(month, year);
		
		if (month == 12 && year != y) {
			year++;
			month = 0;
		} else if (year == y && month == x) 
			break;
		
		space = (space+d)%7;
		month++;
	}
	
	return space;
}
