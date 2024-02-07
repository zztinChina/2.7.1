#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i < 100; i++)
	{
		int j = 0;
		int count = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				count++;
			}
		}
		if (count == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}