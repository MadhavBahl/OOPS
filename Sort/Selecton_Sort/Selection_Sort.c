#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n], min, temp;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n-1; ++i)
	{
		min = i;
		for (int j = i+1; j < n; ++j)
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
	return 0;
}