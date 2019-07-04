#include<stdio.h>
#include<stdlib.h>
void mian()
{
    int i, j, t;
    int a[7] = {5,99,2,1,33,57,6};
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7-i-1; j++)
		{
			if (a[j] > a[j + 1])
   		   {
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
	int n;
	printf("≈≈¡–∫ÛµƒÀ≥–Ú,%s");
	for (n = 0; n < 7; n++)
			{
				printf("%d", a[j]);
			}
}
