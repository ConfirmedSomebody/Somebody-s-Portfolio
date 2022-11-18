#include <stdio.h>

int main() {
	int l, w;
	printf("Type in the length of your rectangle: ");
	scanf("%i", &l);
	printf("Type the width of your rectangle: ");
	scanf("%i", &w);
	printf("The area of your rectangle is: %i\n", l * w);
	return 0;
}

