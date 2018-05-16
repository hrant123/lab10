// 103.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <cstring>
char* func(int);
int main()
{
	for (int i = 0; i < 3; i++) {
		char *dht = func(i);
		printf_s("%s ", dht);
		printf_s("Address: %x \n", dht);
		free(dht);
	}
	system("pause");
    return 0;
}

char* func(int i) {
	char *text[10] = { "Text 1","Text 2","Text 3" };
	char *dht = (char*) malloc(256);
	strcpy_s(dht, 10, text[i]);
	return dht;
}

