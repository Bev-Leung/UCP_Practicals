#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("\n[USAGE]: /.copy.c sourcefile destinationfile");
	}
	else
	{
		FILE *fptr1 = fopen(argv[1], "r");
		FILE *fptr2 = fopen(argv[2], "w");

		if (fptr1 == NULL)
		{
			perror("\n[ERROR]: Could not open source target file for reading\n");
		}
		else if (fptr2 == NULL)
		{
			perror("\n[ERROR]: Could not open destination target file for writing\n");
		}
		else
		{
			int ch;
			ch = fgetc(fptr1);

			while (ch != EOF)
			{
				fputc((char)ch, fptr2);
				ch = fgetc(fptr1);
			}

			fclose(fptr1);
			fclose(fptr2);
		}
	}
	return 0;
}
