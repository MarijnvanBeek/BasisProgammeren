#include <stdio.h>

int main() {
	int leeftijd;
	printf("Wat is je leeftijd?");
	scanf_s("%d", &leeftijd);
	printf("Je leeftijd in maanden is: %d maanden\n", leeftijd * 12);
}