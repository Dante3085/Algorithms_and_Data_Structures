#pragma once

#include <vector>

namespace Sorting
{
	void insertionSort(std::vector<int>& v)
	{
		// Trivially sorted
		if (v.size() <= 1)
			return;

		int value, j;
		for (int i = 1; i < v.size(); ++i)
		{
			value = v[i];
			j = i - 1;
			while (j >= 0 && v[j] > value)
			{
				v[j + 1] = v[j];
				--j;
			}
			v[j + 1] = value;
		}
	}

	void swap(std::vector<int>& v, int i, int j)
	{
		int temp = v[i];
		v[i] = v[j];
		v[j] = temp;
	}

	void bubbleSort(std::vector<int>& v)
	{
		if (v.size() <= 1)
			return;

		int firstSortedIndex = v.size();
		for (int i = 0; i < v.size() - 1; ++i)
		{
			int a = 0;
			int b = 1;
			for (; b < firstSortedIndex; ++a, ++b)
			{
				if (v[a] > v[b])
					swap(v, a, b);
			}
			--firstSortedIndex;
		}
	}
}