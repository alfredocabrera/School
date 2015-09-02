#include<stdio.h>

/* Promise of Originality
I promise that this source code file has, in it's entirety, been
written by myself and by no other person or persons. If at any time an
exact copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted
the copy will receive a zero on this assignment.
*/


int main(int argc, char *argv[])
	{
	printf("Assignment 1 by Carlos A Cabrera\n");

	FILE *fp;

	fp = stdout;



	if (argc == 1 )
		{
		printf("Number of arguments printed : %i\n", argc);
		}	

	else if (argc > 1)
	{

		fp = fopen(argv[1], "w");
		if (fp == NULL)
			{
			perror("creating file");
			return -1;
			}

		int i;
		for ( i = 0; i < argc; i++)
			{
			
			
			fprintf(fp, "Number of arguments printed : #%i:%s\n", i, argv[i]);


			}
		//printf("this is argv : %s\n", argv[1]);
		// here goes the loop that will open file and write array to file
	}

	fclose(fp);
	return 0;
	}
