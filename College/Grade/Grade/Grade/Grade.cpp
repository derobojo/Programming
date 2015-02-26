/*
 * Robert KillKelley
 * CompSci 120
 * Ass. # 3
 * 2/12/15
 */

#include <stdio.h>
#include <stdlib.h>

void   instructions(void);
int input(int);
int    numToLetter(double);

int main(void){
	int ngrade, gradein;
	char   lgrade;

	ngrade = 0;
	instructions();
	gradein = input(ngrade);
	lgrade = numToLetter(gradein);
	printf("Letter grade is %c\n", lgrade);

	return(0);
}

void instructions(void){
	printf("Please enter a number grade \nthat you would like to convert \nto a letter grade (must be between 0 and 100) >> ");
}

int input(int gradein){
	scanf_s("%d", &gradein);

	if ((gradein > 100) || (gradein < 0))
			exit(0);
	else
			return(gradein);
}

int numToLetter(double ngrade){
	int letter = 0;

	if (ngrade > 89)
		{
			letter = 'A';
		}

	else if ((ngrade > 79) && (ngrade < 90))
		{
			letter = 'B';
		}

	else if ((ngrade > 69) && (ngrade < 80))
		{
			letter = 'C';
		}

	else if ((ngrade > 60) && (ngrade < 70))
		{
			letter = 'D';
		}
	
	else
		{
			letter = 'F';
		}

	return(letter);
}