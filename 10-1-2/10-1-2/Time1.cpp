#include "Time.h"
#include <stdio.h>
#include <iostream>
using namespace std;

char *time_valid(int, int, int);
ctime t;
int main() {

	printf("Input hh:mm:ss format\n");
	scanf_s("%02d%02d%02d", &t.h, &t.m, &t.s);

	if (time_valid(t.h, t.m, t.s) != NULL) {
		printf("%s\n", time_valid(t.h, t.m, t.s));
		system("pause");
	}
	func();

	printf_s("%02d:%02d:%02d\n", t.h, t.m, t.s);
	system("pause");
	return 0;

}

char* time_valid(int h, int m, int s) {
	char *error = NULL;
	if (h > 24 || h < 0)
		error = "wrong hour format";
	else if (m > 60 || m < 0)
		error = "wrong minute format";
	else if (s > 60 || s < 0)
		error = "wrong second format";

	return error;
}