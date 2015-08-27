#include<stdio.h>

int main(int argc, char *argv[])
	{
	printf("Assigment 1 by Carlos A Cabrera\n");

	if (argc == 1 )
		printf("Number of arguments printed : %i\n", argc);
	
	else if (argc > 1)
	{
		printf("Number of arguments printed : %i\n", argc);
		//printf("this is argv : %s\n", argv[1]);
		// here goes the loop that will open file and write array to file
	}
	return 0;
	}
