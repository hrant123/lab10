#include "pr.h"
#include <stdio.h>

int main() {
	journal j[4];
	float s = 0;
	printf("Input \n 1. Journal's name \n 2. Journal's count \n 3. Journal's price \n");
	
	for (int i = 0; i < 4; i++) {
		printf("%d) ", i + 1);

		scanf_s("%s", j[i].name, 50);

		scanf_s("%u %f", &j[i].val, &j[i].price);

	}
	for (int i = 0; i < 4; i++)
		s = func(j[i].val, j[i].price);
	printf("The arithmetic average price of journals more than 10000 = %f\n", s);
	system("pause");
}