#include <stdio.h>
#include <stdlib.h>

void function(int, char, char, char);

int time = 0;

int main(void)
{
    int n;

    printf("�п�J�e���𪺰��סG");
    scanf_s("%d", &n);

	function(n, 'A', 'B', 'C');

    system("pause");
	return 0;
}

void function(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("%d: �N�� %d �Ӷ�L�� %c ���� %c\n", ++time, n, A, C);
    }
    else
    {
		function(n - 1, A, C, B);
        printf("%d: �N�� %d �Ӷ�L�� %c ���� %c\n", ++time, n, A, C);
		function(n - 1, B, A, C);
    }
}