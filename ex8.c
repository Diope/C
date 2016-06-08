#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Bob";
	char fullName[] = {
		'B', 'o', 'b', ' ', 'A', ' ',
		'B', 'u', 'r', 'g', 'e', 'r', '\0'
	};

	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The first area is %d, the second %d.\n", areas[0], areas[1]);
	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of a name (char[]): %ld\n", sizeof(name));
	printf("The number of chars: %ld\n", sizeof(name)/sizeof(char));
	printf("Size of full name (char[]): %ld\n", sizeof(fullName));
	printf("name=\"%s\" and fullName=\"%s\"\n", name, fullName);

	return 0;
}