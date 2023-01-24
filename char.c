#include <stdio.h>

int main () {
	char str[21];
	printf("Type in a single word: ");
	scanf("%s", &str);
	for(int i = 0; str[i] != 0; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str + 32;

		}
	}
	
printf("Your character is: %s\n", str);
return 0;
}

