#include <stdio.h>

int main()
{
	int i, sum = 0, n = 5;
	for(i = 1;i <= n;i++)
	{
		sum += i;
	}
	printf("Sum is:%d",sum);
	return 0;
}
