#include <stdio.h>   // Preprocessor directive 

int main() {
	int a, b;    // Decalarations
	char c;
                     // Assignment statements
	a = 10;
	b = 20;
	c = 'M';

	scanf("%c", &c);

	if (a > b) {

        	printf("a > b = %i\n", a > b); // Output 
	} 
	if(c >= 65 && c <= 90) {
		c = c + 32;
		printf("lowercase = %c\n", c  ); // K
	}


	return 0;    // Return value
} 
