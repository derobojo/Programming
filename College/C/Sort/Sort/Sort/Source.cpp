#include <stdio.h>

int sort(int a[], int size);

int main(void){
	int duplicate;
	int num[5];
	//int x;
	printf("Please enter 5 integers\n");
	for (int x=0; x < 5; x++){
		scanf_s("%d", &num[x]);
	}
	duplicate = sort(num, 5);
	if (duplicate == 0)
		printf("There were duplicates in the input\n");
	if (duplicate == 1)
		printf("No duplicates in the input\n");
	return (0);
}

int sort(int a[], int size){
	int isit = 1;
	int hold = 0;
	
		for (int count = 0; count < 4; count++){
			for (int check = 0; check < 4; check++){
				if (a[check]>a[check + 1])
				{
					hold = a[check];
					a[check] = a[check + 1];
					a[check + 1] = hold;
				}
			}
		}
	
		for (int count = 0; count < 5; count++){
			for (int test = count + 1; test < 4; test++){
				if (a[count] == a[test]){
					isit = 0;
				}
			}
		}

		printf("\nHere is the sorted order\n");

		for (int count = 0; count < 5; count++){
			printf("%d\n", a[count]);
		}

	return(isit);
}