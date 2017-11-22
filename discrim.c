#include <stdio.h>
#include <math.h>

/* The function prototypes */
void promptcoeff(float*,float*,float*);
float calcdisc(float,float,float);
void calcroots(float,float,float,float*,float*);
void printroots(float,float);

int main()
{
	float a,b,c,D,root1,root2;

	promptcoeff(&a,&b,&c);
	D = calcdisc(a,b,c);
	if(D<0)
		printf("The roots are complex: cannot compute.\n");
	else
		{
		calcroots(a,b,D,&root1,&root2);
		printroots(root1,root2);
		}
	
	return 0;
}

/* This function prompts the user for the equation coefficients */
void promptcoeff(float*a,float*b,float*c)
{
	printf("\n");
	printf("Enter the ""a"" coefficient:");
	scanf("%f",a);

	printf("Enter the ""b"" coefficient:");
	scanf("%f",b);

	printf("Enter the ""c"" coefficient:");
	scanf("%f",c);
}

/* This function calculates the discriminant of the equation */
float calcdisc(float a,float b,float c)
{
	return pow(b,2)-(4*a*c);
}

/* This function calculates the two roots of the equation */
void calcroots(float a,float b,float D,float*r1,float*r2)
{
	*r1 = ((b*(-1))+sqrt(D))/(2*a);
	*r2 = ((b*(-1))-sqrt(D))/(2*a);
}

/* This function prints the roots */
void printroots(float r1,float r2)
{
	printf("Root 1 is: %.2f\n",r1);
	printf("Root 2 is: %.2f\n",r2);
}