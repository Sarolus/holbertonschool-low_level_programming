#include "holberton.h"

/**
 * reverse_array - Reverse content of an array
 * @arr: The array
 * @elem : Number of elements of the array
 */

void reverse_array(int *arr, int elem)
{
	int temp, begin ,end;

	for (begin = 0, end = elem - 1; begin < end; begin++, --end)
	{
		temp = arr[end];
		arr[end] = arr[begin];
		arr[begin] = temp;
	}
}
