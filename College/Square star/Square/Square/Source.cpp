#include <stdio.h>

void forwhile(int, int);
void whilefor(int, int);
void forfor(int, int);
void whilewhile(int, int);

int main(){
	int line, column;
	line = 0;
	column = 0;

	forwhile(line, column);
	printf("\n\n\n");
	whilefor(line, column);
	printf("\n\n\n");
	forfor(line, column);
	printf("\n\n\n");
	whilewhile(line, column);
	printf("\n");
	return(0);
}

void forwhile(int line, int column){


	for (line = 0; line < 10; line++){
		while (column < 5){
			printf("*");
			column++;
		}
		printf("\n");
		column = 0;
	}
	
}

void whilefor(int line, int column){
	line = 0;
	while (line < 10){
		for (column = 0; column < 5; column++){
			printf("*");
		}
		printf("\n");
		line++;
	}
	
}

void forfor(int line, int column){
	for (line = 0; line < 10; line++){
		for (column = 0; column < 5; column++){
			printf("*");
		}
		printf("\n");
	}
}

void whilewhile(int line, int column){
	line = 0;
	column = 0;

	while (line < 10){
		while (column < 5){
			printf("*");
			column++;
		}
		printf("\n");
		column = 0;
		line++;
	}
}