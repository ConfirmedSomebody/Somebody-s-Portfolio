#include <stdio.h>

// Ask the user for 3 integers
// Use scanf("%i", varname);
// Print out the sum of all 3 variables

int main() {
	int x, y, z;
	printf("Enter your 1st number: ");
	scanf("%i", &x);
	printf("Enter your 2nd number: ");
	scanf("%i", &y);
	printf("Enter your 3rd number: ");
	scanf("%i", &z);
	printf("The sum of your numbers is: %i\n", x + y + z);
	return 0;
}
