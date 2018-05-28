#include "FuncBubble.h"
#include "bubbleSort.h"
#include "bubbleSort.cpp"

int main()
{
	int mas[3] = { 5,3,6 };
	double mas1[3] = { 6.1,2.7,1.1 };
	for (int i = 0; i < 3; i++)
		cout << mas1[i] << "\t";
	cout << endl;
	bubbleSort(mas1, 3);
	for (int i = 0; i < 3; i++)
		cout << mas1[i] << "\t";
	cout << endl;
	bubble_Sort<int>::Sort(mas, 3);
	for (int i = 0; i < 3; i++)
		cout << mas[i] << "\t";
	cout << endl;
	return 0;
}