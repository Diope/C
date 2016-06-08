#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	//For loops, we all know these
	for(i = 1; i < argc; i++) {
		printf("argc %d: %s\n", i, argv[i]);
	}

	char *states[] = { "California", "Oregon", "Washington", "Texas"};
	int numStates = 4;

	for(i = 0; i < numStates; i++) {
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}