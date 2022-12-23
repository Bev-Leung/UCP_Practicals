/*
Author : Beverly Ann Leung For Sang
Date   : 19 August 2022
Unit   : Unix and C Programming
*/

#include <stdio.h>

void output(int* array, int length)
{
	int i;
	for (i=0; i<length; i++)
	{
		if (i == 0)
		{
			printf("{%d,", array[i]);
		}
		else if (i == (length - 1))
		{
			printf(" %d}\n", array[i]);
		}
		else
		{
			printf(" %d,", array[i]);
		}
	}
}

int main(void)
{
	int array[] = {1, 2, 3, 4};
	output(array, 4);
	return 0;
}
