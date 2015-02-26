/*
* Name: Robert KillKelley
* Class: CompSci using C
* Ass.: 1
* Date: 1/15/15
* Instructor: Professor Deligiannidis
*/

#include <stdio.h>
#include <cstdlib>

int main(void){
	int a, b, c, d, e;
	double average;
	printf("Please enter a value for integer 1>> ");
	scanf_s("%d", &a);
	printf("Please enter a value for integer 2>> ");
	scanf_s("%d", &b);
	printf("Please enter a value for integer 3>> ");
	scanf_s("%d", &c);
	printf("Please enter a value for integer 4>> ");
	scanf_s("%d", &d);
	printf("Please enter a value for integer 5>> ");
	scanf_s("%d", &e);
	average = (double)((a) + b + c + d + e) / 5;
	printf("\nThe average is: %f\n", average);
	return(0);
}