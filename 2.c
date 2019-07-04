#include<stdio.h>
int main()
{
	int left = 0, right = 6, mid;
	int a[] = { 1, 2, 5, 6, 33, 57, 99 };
	while (left < right)
	{
		mid = (left + right) / 2;
		if (a[mid] < 6 && a[mid] == 6)
		{
			left = mid;
		}
		else{ right = mid; }
		if (a[left] = 6)
			return 3;
		if (a[right] = 6)
			return 3;
		else
			return -1;
	}
}