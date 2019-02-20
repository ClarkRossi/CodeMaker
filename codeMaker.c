/*
  Clark Rossi
  9/25/18
  C Module
  Assignment 2
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
	char writer; //Character variable to hold incoming char's
	int unchangedCount = 0; //Variable for the number of unchanged characters 

	FILE *readFile = fopen(argv[1],"r"); //reads argv[1] as input file
	FILE *writeFile = fopen(argv[2],"w"); //writes new file named in argv[2] 

	//writes characters from argv[1] to new file
	while ((writer = fgetc(readFile)) != EOF)
	{
		//Converts characters to lower case
		writer = tolower(writer);

		//Converts characters
		switch(writer)
		{
			case 'a':
				writer = '4';
				break;
			case 'b':
				writer = '8';
				break;
			case 'c':
				writer = '(';
				break;
			case 'e':
				writer = '3';
				break;
			case 'i':
				writer = '1';
				break;
			case 'g':
				writer = '6';
				break;
			case 'o':
				writer = '0';
				break;
			case 's':
				writer = '5';
				break;
			case 't':
				writer = '7';
				break;				
			default :
				unchangedCount++;
		}
		fputc(writer, writeFile); //Outputs writer to file
	}
	printf("%d characters unchanged.\nConversion complete.\n", unchangedCount); //Prints number of unchanged characters
	fclose(readFile); //closes read file
	fclose(writeFile); //closes write file
}
