#include <stdio.h>

int main() {
	int a, b, c, d;
	do {
		printf("To make your rectangle, type in your first side length: ");
		scanf("%i", &a);
		printf("Now that you have your first length, type in your second side length: ");
		scanf("%i", &b);
		printf("Nice! Tpye in your thrid side length: ");
		scanf("%i", &c);
		printf("Almost done! Type in your final side length: ");
		scanf("%i", &d);
	} while( a < 0 ||  b < 0 ||  c < 0 || d < 0);
	printf("Here's the size of your rectangle: %i.\nThanks for making a rectangle!\n", a + b + c + d);
	return 0;
}
