#include <stdio.h>

int mySmallest(int, int, int, int, int);

int main(){
	int a,b,c,d,e;
	int small;
	printf("--Please enter 5 even integers--\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	scanf_s("%d", &e);
	small = mySmallest(a,b,c,d,e);
	if (small == -9999){
		printf("the user did NOT enter 5 even numbers");
	}
	else
		printf("The small is %d\n", small);
	return(0);
}

int mySmallest(int one, int two, int three, int four, int five){
	int smallest = -9999;

	if ((one % 2 == 0) && (two % 2 == 0) && (three % 2 == 0) && (four % 2 == 0) && (five % 2 == 0)){
		if ((one <= two) && (one <= three) && (one <= four) && (one <= five))
			smallest = one;
		if ((two <= one) && (two <= three) && (two <= four) && (two <= five))
			smallest = two;
		if ((three <= one) && (three <= two) && (three <= four) && (three <= five))
			smallest = three;
		if ((four <= one) && (four <= three) && (four <= two) && (four <= five))
			smallest = four;
		if ((five <= one) && (five <= three) && (five <= four) && (five <= two))
			smallest = five;
	}
	return(smallest);
}