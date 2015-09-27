/* 
 *  Robert KillKelley
 *  Comp 120
 *  Ass. : 2
 *  Date : 1 / 29 / 15
 *  Professor Deligiannidis
 */

#include <stdio.h>
#include <cstdlib>
#include <math.h>

int main(void){
	int hour,min;
	double temperature, time, mh;
	printf("Enter the time in hours \nExample:\n2 hours 30 minutes as 2 30\nFor 30 minutes enter 0 30\nIf no minutes put 0\n\n");
	printf("---------------------------------------------------------------\n");
	printf("\nPlease enter the amount of time the power has been out >> ");
	scanf_s("%d%d", &hour,&min);
	system("CLS");
	printf("Hour(s): %d\n", hour);
	printf("Minute(s): %d\n", min);
	mh = min / 60;
	time = mh + hour;
	printf("Time: %f\n", time);
	temperature = ((4 * (time*time)) / (time + 2)) - 20;
	printf("The temperature is around %fF\n", temperature);
	return(0);
}