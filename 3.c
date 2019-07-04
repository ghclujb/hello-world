#include<stdio.h>
void main()
{
	{
		char a[5] = { 'a', 'b', 'c', 'd', 'e' };
		int b[5] = { 1, 2, 3, 4, 5 };
		int i, j;
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (a[i] - a[j] == 64)
				{
					int t;
					t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}
		}

	}




}