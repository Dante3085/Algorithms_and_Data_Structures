#pragma once

#include <math.h>
#include <vector>

namespace Searching
{
	int binarySearch(std::vector<int>const& v, int value)
	{
		int leftIndex = 0;
		int rightIndex = v.size();
		int middleIndex = ceil((rightIndex + leftIndex) / 2);

		while (v[middleIndex] != value)
		{
			if (v[middleIndex] > value)
			{
				rightIndex = middleIndex;
			}
			else
			{
				leftIndex = middleIndex;
			}
			middleIndex = ceil((rightIndex + leftIndex) / 2);
		}
		return middleIndex;
	}
}