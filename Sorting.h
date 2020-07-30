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
}