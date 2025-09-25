#include <stdio.h>

int main() {
	float a;
	printf("Geef een getal");
	scanf_s("%f", &a);
	printf("%.4f", a);
}