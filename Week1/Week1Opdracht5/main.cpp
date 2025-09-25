#include <stdio.h>
int main() {
	int a, b;
	
	printf("Geef 2 waardes:");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a == b)
	{
		printf("gelijk");
	}
	
	else {
		printf("ongelijk");
	}
}