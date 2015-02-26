#include <stdio.h>
#include <math.h>

void instructions(void);
double equation(double);

int main(void){
	double temp, solution;
	instructions();
	scanf_s("%lf", &temp);
	solution = equation(temp);
	printf("\nThe value is %f\n", solution);
	return(0);
}

void instructions(void){
	printf("Please enter a value for T and i will calculate A >> ");
}

double equation(double t){
	double value;
	printf("T = %f\n",t); 
	value = 1086 * (pow((((5 * t) + 297) / 247), 1/2.0));
	return(value);
}