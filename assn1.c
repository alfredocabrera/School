//Student : Carlos A Cabrera
//Class : CS-3060 Fall 2015
//Assignment 1

/* Promise of Originality
I promise that this source code file has, in it's entirety, been
written by myself and by no other person or persons. If at any time an
exact copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted
the copy will receive a zero on this assignment.
*/

#include<stdio.h>

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
		printf("Number of arguments printed : %i\n", argc);

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
	}

	fclose(fp);
	return 0;
	}
