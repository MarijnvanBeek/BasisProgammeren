#include <stdio.h>
int main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	
	printf("Voer 3 integers in:");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	d = a + b + c;
	e = d / 3;
	printf("Het gemiddelde is: %d", e);
}