#include <stdio.h>

int main(void){
	errno_t err;
	FILE *inp, *outp;
	double in, out;
	double A, B, C, D, E;
	double Average;
	printf("Reading file\n");

	if ((err = fopen_s(&inp, "C:\\Users\\killkelleyr\\Documents\\GitHub\\Programming\\College\\Print to File\\Read.txt", "r")) != 0)
		printf("Input file not opened\n");

	if ((err = fopen_s(&outp, "C:\\Users\\killkelleyr\\Documents\\GitHub\\Programming\\College\\Print to File\\Write.txt", "w")) != 0)
		printf("Output file not opened\n");

	fscanf_s(inp, "%lf" "%lf" "%lf" "%lf" "%lf", &A, &B, &C, &D, &E);
	Average = ((A + B + C + D + E) / 5);
	fprintf(outp, "The average is %f", Average);
	printf("The average is %f\n", Average);

	fclose(inp);
	fclose(outp);
	return(0);
}