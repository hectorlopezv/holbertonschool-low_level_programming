#include "search_algos.h"

/**
 *print_array - print_array
 *@array: array
 *@left: left part
 *@right: right part
 *Return: Always EXIT_SUCCESS
 */

void print_array(int *array, int left, int right)
{
	char comma_;


	printf("Searching in array:");
	for (; left < right; left++)
	{
		comma_ = (left < right - 1) ? ',' : 32;
		printf(" %d%c", array[left], comma_);
	}
	printf("\n");
}

/**
 *binary_search - print_array
 *@array: array
 *@size: left part
 *@value: right part
 *Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;
		print_array(array, left, right + 1);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}

