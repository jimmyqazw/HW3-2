#include <stdio.h>
#include <stdlib.h>

void function(int, char, char, char);

int time = 0;

int main(void)
{
    int n;

    printf("請輸入河內塔的高度：");
    scanf_s("%d", &n);

	function(n, 'A', 'B', 'C');

    system("pause");
	return 0;
}

void function(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++time, n, A, C);
    }
    else
    {
		function(n - 1, A, C, B);
        printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++time, n, A, C);
		function(n - 1, B, A, C);
    }
}