/*
* Name: Robert KillKelley
* Class: CompSci using C
* Ass.: 1
* Date: 1/15/15
* Instructor: Professor Deligiannidis
*/

#include <stdio.h>
#include <cstdlib>

int main(void)
{
	double prob1, prob2, prob3, a, b, c; //define 3 different problems and the input of a,b, and c
	double a1, a2, a3; //Answer to the different problems
	a = 0;
	b = 0;
	c = 0;
	printf("This program will calculate the values for different equations\ngiven values for a, b, and c. ")
	printf("Please enter value for a >> ");
	scanf_s("%lf", &a);
	printf("Please enter a value for b >> ");
	scanf_s("%lf", &b);
	printf("Please enter a value for c >> ");
	scanf_s("%lf", &c);
	prob1 = ((b*b) - (4 * a*c));
	prob2 = ((a + b) / (c + b));
	prob3 = 1 / (1 + (a*a));
	system("cls");
	printf("The answer for problem one is %f.\n", prob1);
	printf("\n\nThe answer for problem two is %f.\n", prob2);
	printf("\n\nThe answer for problem three is %f.\n\n", prob3);
	return(0);
}