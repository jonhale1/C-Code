#include <stdio.h>
#include <math.h>

/* Function prototypes */
float calccarnot(float, float);
void printcarnot(float);

int main()
{
	/* Function variables */
	float coldres,
		  hotres,
		  carnot;

	/* These statements ask the user for the two respective resrvoir temperatures */
	printf("What is the temperature in Kelvin of the cold reservoir?\n");
	scanf("%f",&coldres);
	printf("What is the temperature in Kelvin of the hot reservoir?\n");
	scanf("%f",&hotres);

	/* Call the functions */
	carnot = calccarnot(coldres,hotres);
	printcarnot(carnot);

	return 0;
}
/* This function calculates the Carnot efficiency */
float calccarnot(float coldres, float hotres)
{
	return 1-(coldres/hotres);
}
/* This function prints the Carnot efficiency */
void printcarnot(float carnot)
{
	printf("The Carnot efficiency is %.3f\n",carnot);
}
