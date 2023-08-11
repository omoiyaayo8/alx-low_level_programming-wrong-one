#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer it is compiled and run on.
 *
 * Reeturn:0 (Sucess)
 *
 */
int main(void)
{

	int pa;
	char a;
	long c;
	float d;
	printf("Size of a char:%lu byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of a int :%lu byte(s)\n",(unsigned long)sizeof(pa));
	printf("size of a long:%lu byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of a float:%lu byte(s)\n",(unsigned long)sizeof(d));
}


