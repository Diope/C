#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	while(i<argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	//array
	char *states[] = {"California", "Oregon", "Washington", "Texas"};

	int numStates = 4;
	i = 0;
	while(i < numStates) {
		printf("State %d: %s\n", i, states[i]);
		i++;
	}

	return 0;
}