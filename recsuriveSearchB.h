#pragma once

template <class elemType>
int binarySearch(const elemType list[], int firstN, int lastN, const elemType& item)
{
	int mid;
	bool found = false;

	while(firstN <= lastN && found == false)
	{
		mid = (firstN + lastN) / 2;	//midpoint - essentially the middle portion of the array

		if (item == list[mid])	//if midpoint is item 
			found = true;
		else if (item < list[mid])	//lower part 
			return binarySearch(list, firstN, mid - 1, item);
		else
			return binarySearch(list, mid + 1, lastN, item);
	}
	if (found)	//if key is found, else return -1 
		return mid;
	else
		return -1;

}






