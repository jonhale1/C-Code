#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

int main()
{
	int i;
	typedef struct{
		float a,b;
	}compnum;

compnum mycompnum[N];

/* This loops to prompt users for the real and imaginary components of a number */
for(i=0;i<N;i++)
{
	printf("Whats is the real part of number %d:",i+1);
	scanf("%f",&mycompnum[i].a);
	printf("Whats is the imaginary partof number %d:",i+1);
	scanf("%f",&mycompnum[i].b);
}

/* This loop prints the real and imaginary numbers */
for(i=0;i<N;i++)
{
printf("Number %d: The number is %.2f +i%.2f\n",i+1,mycompnum[i].a,mycompnum[i].b);	
}
return 0;
}