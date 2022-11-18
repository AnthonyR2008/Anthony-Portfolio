#include <stdio.h> 
// Ask the user for 3 integers 
// Use scanf("%i", varname);
// Print out the sum of all 3 variables
int main() { 
	int x, y;
	printf("Enter the first number ");
	scanf("%i", &x);
	printf("Enter the second number ");
	scanf("%i", &y);
	int z = x * y;
	printf("The area of your rectangle is %i\n",  z);
	return 0; 
} 
