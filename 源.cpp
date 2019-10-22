#include<stdio.h> 
int main() 
{
	double C, F;  
	scanf_s("%lf", & F); 
	C = 5 / 9.0 * (F - 32);
	printf ("C=%6.2f\n", C); 
	return 0; 
} 