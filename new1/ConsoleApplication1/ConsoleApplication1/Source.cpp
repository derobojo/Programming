#include <stdio.h>
#include <stdlib.h>

void   instructions(void);
int input(int);

int main(void){
	int ngrade, inputgrade;
	ngrade = 0;
	inputgrade = 0;
	instructions();
	inputgrade = input(ngrade);
	return(0);
}

void instructions(void){
	printf("Please enter a number grade \nthat you would like to convert \nto a letter grade (must be between 0 and 100) >> ");
}

int input(int gradein){
	scanf_s("%d", &gradein);
	if (gradein < 20)
	{
		/* if condition is true then print the following */
		printf("a is less than 20\n");
	}
	/*if (gradein > 100)// || (gradein < 0))
		exit(0);
	else if (gradein < 100)
		printf("IT WORKS");*/
		return(gradein);
}