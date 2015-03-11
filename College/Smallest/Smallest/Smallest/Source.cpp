#include <stdio.h>

int mySmallest(int ar[], int size);

int main(){
	int c;
	int even[3];
	int small;
	c = 1;
	printf("--Please enter 4 even integers--\n");
	while (c < 5){
		printf("Please enter integer %d >> ", c);
		scanf_s("%d", &even[c]);
		c++;
	}

	small = mySmallest(even, 4);
	printf("The small is %d\n", small);
	return(0);
}

int mySmallest(int ar[], int size){
	int smallest = -9999;
	int start = 0;
	int prev;
	int count;
	count = 1;
	prev = ar[count];

	if ((ar[1] % 2 == 0) && (ar[2] % 2 == 0) && (ar[3] % 2 == 0) && (ar[4] % 2 == 0)){
		for (count = 1; count < 5; count++){
			if (ar[count] <= start){
				smallest = ar[count];
			}
			prev = ar[count];
		}
	}
	return(smallest);
}