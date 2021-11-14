#include <stdio.h>
#include <stdlib.h>

int change(int x,int y);

int main(void)
{
	int a,b;
	scanf_s("%d %d", &a, &b);
	printf("%d", change(a,b));
	system("pause");
	return 0;
}

int change(int x,int y)
{
	int ans;
	if (x > y) ans = x;
	else ans = y;
	while (ans%x != 0 || ans % y != 0)
	{
		ans += 1;
	}


	return ans;
}
