#include "search_algos.h"

/**
 * print_array - print all value of an array
 * @array: pointer to the first element of the array to search in
 * @start: first element index of the array
 * @end: last element of the array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the index where value is located, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, median;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		print_array(array, start, end);

		median = (start + end) / 2;

		if (array[median] == value)
			return (median);
		else if (array[median] > value)
			end = median - 1;
		else
			start = median + 1;
	}

	return (-1);
}
