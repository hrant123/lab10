// 1011.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>

struct time {
	int h, m, s;
};
time time_update(time);
char *time_valid(int, int, int);
int main()
{
	time t;
	printf("Input hh:mm:ss format\n");
	scanf_s("%02d%02d%02d", &t.h, &t.m, &t.s);

	if (time_valid(t.h, t.m, t.s) != NULL) {
		printf("%s\n", time_valid(t.h, t.m, t.s));
		system("pause");
	}

	t = time_update(t);
	printf_s("%02d:%02d:%02d\n", t.h, t.m, t.s);
	system("pause");
	return 0;
}

time time_update(time t) {
	t.s++;

	if (t.s == 60) {
		t.s = 0;
		t.m++;
		if (t.m >= 60) {
			t.m -= 60;
			t.h++;
			if (t.h >= 24)
				t.h -= 24;
		}
	}

	return t;
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
