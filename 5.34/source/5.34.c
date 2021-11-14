#include <stdio.h>
#include <stdlib.h>

int power(int x, int y);

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", a);
	power(a, b);
	system("pause");
	return 0;
}

int power(int x, int y)
{
	int ans;
	
	if (y > 1)
	{
		y--;
		printf("*%d", x);
		power(x, y);
	}

}
