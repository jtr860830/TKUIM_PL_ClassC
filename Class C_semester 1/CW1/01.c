#include <stdio.h>
int main(void)
{
	int ID1=1001, ID2=1003, s2=62;
	float s1=98.5;
	printf("%6s%7s%8s%20s\n","ID", "Name", "Score", "CommentsGrade");
	printf("%6d%7s%8.1f%20s\n", ID1, "Peter", s1, "\"Good performance\"");
	printf("%6d%7s%8d%20s\n", ID2, "Joe", s2, "\"Below average\"");
	return 0;
	
}
