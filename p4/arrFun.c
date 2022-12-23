/*
Author : Beverly Ann Leung For Sang
Date   : 19 August 2022
Unit   : Unix and C Programming
*/

#include <stdio.h>

int sum(int* arr, int length)
{
	int i, sum;
	for (i=0; i<length; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int max(int* arr, int length)
{
	int index, i, max;
	max = -99999;
	for (i=0; i<length; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	return index;
}

void reverse(int* arr, int length)
{
	int i;
	for (i=0; i<length; i++)
	{
		list[i] = arr[length - 1 -i];
	}
	delete[] arr;
	arr = arrOut;
}

int main(void)
{
	int sum1, sum2, max1, max2;
	int array[] = {23, 78, 64, 19, 35};
	sum1 = sum(array, 5);
	max1 = max(array, 5);
	reverse(array, 5);
	sum2 = sum(array, 5);
	max2 = max(array, 5);
	printf("Previous sum and position of max integer are %d and index &d\n", sum1, max1);
	printf("After reverse() was called, sum is still %d, but position of max integer is index %d\n", sum2, max2);
	return 0;
}
