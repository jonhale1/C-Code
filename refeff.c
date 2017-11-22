#include <stdio.h>
#include <math.h>

/* The function prototypes */
void promptheat(float*, float*);
void calcperf(float,float,float*,float*);
void printperf(float,float);

int main()
{
	float coldr,
		  hotr,
		  refp,
		  heatp;

	promptheat(&coldr,&hotr);
	calcperf(coldr,hotr,&refp,&heatp);
	printperf(refp,heatp);

	return 0;
}

/* This function prompts users for hot and cold reservoir temperatures */
void promptheat(float*coldr,float*hotr)
{
printf("What is the cold reservoir temperature (Kelvin):\n");
scanf("%f",coldr);
printf("What is the hot reservoir temperature (Kelvin):\n");
scanf("%f",hotr);
}

/* This function calculates the coefficient of performance for the refrigeration cycle */
/* and heat pump */
void calcperf(float coldr,float hotr,float*refp,float*heatp)
{
	*refp = coldr/(hotr-coldr);
	*heatp = hotr/(hotr-coldr);
}

/* This function prints the coefficients of performance */
void printperf(float refp,float heatp)
{
	printf("The coefficient of performance of the refrigeration cycle is: %.2f\n",refp);
	printf("The coefficient of performance of the heat pump is: %.2f\n",heatp);
}