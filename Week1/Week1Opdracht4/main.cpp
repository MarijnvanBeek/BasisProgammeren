#include <stdio.h>

int main() {
	int a, b, c;
	printf("Geef 3 waardes: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	if (a > b && a > c) {
		printf("%d is het grootste getal", a);
	}

	else if (b > a && b > c) {
		printf("%d is het grootste getal", b);
	}

	else {
		printf("%d is het grootste getal", c);
	}
}