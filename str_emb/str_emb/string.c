#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "ctype.h"

//Зробити всі непарні символи великими, а парні - малими

int main() {

	char str[100];
	printf("Enter your string: ");
	scanf("%[^\n]", str);

	int lenght = strlen(str);
	int toggle = 0;

	for (int i = 0; i < lenght; i++) {
		if (!isspace(str[i])) {
			if (toggle == 0) {
				char upper = toupper(str[i]);
				str[i] = upper;
			}
			else {
				char lower = tolower(str[i]);
				str[i] = lower;
			}
			toggle = 1 - toggle;
		}
	}

	printf("Result: %s", str);

	return 0;
}