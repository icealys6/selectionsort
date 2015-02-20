#include <iostream>
using namespace std;

void selectionsort(int *buf, int size);

int main()
{
	int array1[] = { 12, 3, 6, 14, 9, 4, 11, 13 };

	selectionsort(array1,8);

	for (int i = 0; i < 8; i++)
	{
		cout << array1[i] << ' ';
	}
	system("pause");

	return 0;
}


void selectionsort(int*buf, int size)
{
	for (int startscan = 0; startscan < size - 1; startscan++)
	{
		int minindex = startscan;
		int minvalue = buf[startscan];

		for (int index = startscan + 1; index < size; index++)
		{
			if (minvalue > buf[index])
			{
				minindex = index;
				minvalue = buf[index];
			}
		}
		buf[minindex] = buf[startscan];
		buf[startscan] = minvalue;
	}

}
