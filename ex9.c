#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};

	//raw usage
	printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1],
									numbers[2], numbers[3]);

	printf("Name: %c %c %c %c\n", name[0], name[1],
								name[2], name[3]);

	//Print like a string
	printf("Name: %s\n", name);

	// Pointer usage
	char *another = "Bob";

	printf("Another: %s\n", another);
	printf("Another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

	return 0;
}