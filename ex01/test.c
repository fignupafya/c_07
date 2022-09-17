int *ft_range(int min, int max);
#include <stdio.h>
int main()
{
	int a = 0;
	int *arr = ft_range(1,6);
	while (a < 5)
	{
	printf("%d\n",arr[a]);
	a++;
	}
}
