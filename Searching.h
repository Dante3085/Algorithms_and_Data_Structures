#pragma once

#include <math.h>
#include <vector>

namespace Searching
{
	int binarySearch(std::vector<int>const& v, int value)
	{
		// We assume v is sorted in ascending order,
		// so early out when value is outside of those bounds.
		if (value < v[0] || value > v[v.size() - 1])
			return -1;

		int leftIndex = 0;
		int rightIndex = v.size() - 1;
		int middleIndex = ceil((rightIndex + leftIndex) / 2);

		while (v[middleIndex] != value)
		{
			// The search space is one element wide and
			// that's not it => The element that we want
			// does not exist in this list.
			if (leftIndex == rightIndex)
				return -1;

			if (v[middleIndex] > value)
			{
				// -1 makes it so that the middle element
				// is also ignored.
				rightIndex = middleIndex - 1;
			}
			else
			{
				// +1 makes it so that the middle element
				// is also ignored.
				leftIndex = middleIndex + 1;
			}

			// Negative search space width.
			// Probably just an inaccuracy in the
			// index calculations.
			if (rightIndex < leftIndex)
				return -1;

			middleIndex = ceil((rightIndex + leftIndex) / 2);
		}
		return middleIndex;
	}

	int linearSearch(std::vector<int> const& v, int value)
	{
		for (int i = 0; i < v.size(); ++i)
		{
			if (v[i] == value)
				return i;
		}
		return -1;
	}
}