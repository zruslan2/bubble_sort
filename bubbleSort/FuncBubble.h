#pragma once
#include "Library.h"

template <typename T>
void bubbleSort(T * arr, int count)
{
	T prom;
	for (int i = 0; i < count-1; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				prom = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = prom;
			}
		}
	}		
}