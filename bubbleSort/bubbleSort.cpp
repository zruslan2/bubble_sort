#include "bubbleSort.h"

template<class T>
void bubble_Sort<T>::Sort(T * arr, int count)
{
	for (int i = 0; i < count-1; i++)	
		for (int j = 0; j < count - 1; j++)		
			if (arr[j] > arr[j + 1])			
				swap(arr[j], arr[j + 1]);			
}
