//Ternerary Search
//Devide and Conquer
//array must be sorted

#include <bits/stdc++.h>
using namespace std;

int TernerarySearch(int begin, int end, int key, int *array)
{
	int mid1, mid2;

	if(end >= begin)
	{
		mid1 = begin + (end-begin)/3;
		mid2 = end - (end-begin)/3;

		if(key==array[mid1])
			return mid1;
		if(key==array[mid2])
			return mid2;

		if(key < array[mid1])
			return TernerarySearch(begin,mid1-1,key,array);

		if(key > array[mid2])
			return TernerarySearch(mid2+1, end, key, array);

		else
			return TernerarySearch(mid1+1, mid2-1, key, array);
	}

	return -1;
}

int main()
{
	int begin,end,p,key,len;

	int array[] = {1,2,3,4,5,6,7,8,9,10};

	begin = 0;
	end = 9;

	cout << "Enter the number: ";
	cin >> key;

	p = TernerarySearch(begin, end, key, array);

	if(p>=0)
		cout <<  "Position of " << key << " is: " << p+1 << endl;
	else
		cout << key << " not found!" << endl;

	return 0;

}