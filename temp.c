#include <stdio.h>

int main() {
	float f, c;
	printf("Type in a value: ");
	scanf("%f", &f);
	c = (5.0 / 9.0) * (f - 32);
	printf("\n Your value: %f, is %.1f in Celsius.\n", f, c);
	return 0;
}

