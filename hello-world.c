#include <stdio.h>

int main(void)
{
	char greetings[50];
	strcpy(greetings, "World!");
	printf("Hello,%s\n", greetings);
	return 0;
}
