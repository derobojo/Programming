/*
 * Robert KillKelley
 * CompSci 120
 * Ass. 3
 * 1/29/15
 */
#include <stdio.h>
#include <math.h>
double speeds_ratio(double, double);

int main(void){
	double max, min, ratio;
	printf("Please enter the Max speed >> ");
	scanf_s("%lf", &max);
	printf("Please enter the Min speed >> ");
	scanf_s("%lf", &min);
	ratio = speeds_ratio(max, min);
	printf("The ratio between successive speed of a six-speed gearbox\nwith a maximum speed %frpm and minimum speed %frpm \nis %f\n", max, min, ratio);
	return(0);
}

double speeds_ratio(double max, double min){
	double ratio;
	ratio = pow((max/min), (1 / 5.0));
	return(ratio);
	
}