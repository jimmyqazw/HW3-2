#include <stdio.h>
#include <stdlib.h>

unsigned long long int function(unsigned int input);

int main(void)
{
	int num;

	printf("輸入你要算第幾位費氏數列數字:");
	scanf_s("%d", &num);

	while (num > 94 || num < 1)
	{
		printf("請輸入正整數且最大只能至94\n");
		printf("輸入你要算第幾位費氏數列數字:");
		scanf_s("%d", &num);
	}

	function(num);
	printf("%I64u\n\n",function(num));
	printf("此系統最大顯示至第94位:%I64u\n\n", function(94));
	system("pause");
	return 0;
}

unsigned long long int function(unsigned int input)
{
	unsigned long long int result[95];
	result[1] = 0;
	result[2] = 1;
	for (int i = 3; i <= input; i++)
	{
		result[i] = result[i - 1] + result[i - 2];
	}
		
	return result[input];
}