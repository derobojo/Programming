#include <stdio.h>

int MySum(int, int);
int MySum2(int, int);

int main(){
	int a, b, great;
	printf("Please Enter two Numbers \n"); //This gives instruction to the user then inputs two numbers
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	great = MySum(a, b); //To use the while loop version change "MySum" to "MySum2"
	if (great == -999){ //This indicates if the first number was greater than the second
		printf("The first number is larger than the last\n");
	}
	else
		printf("The sum is %d\n", great);
}

int MySum(int one, int two){
	int total = -999;
	int count = 0;
	if (one < two)
		{
			total = 0;
			if (one % 2 == 0)
				{
					count = one+1;
				}
			for (count; count <= two; count += 2) //This is where the total of odd integers are added
			{
				total = total + count;
			}
		}
	return(total);
}

int MySum2(int one2, int two2){ //This is the start of the code for the while loop does the same as the first function
	int total2 = -999;
	int count2 = 0;
	if (one2 < two2)
	{
		total2 = 0;
		if (one2 % 2 == 0)
			{
				count2 = one2 + 1;
			}
		while (count2 <= two2)
			{
				total2 = total2 + count2;
				count2 += 2;
			}
	}
	return(total2);
}