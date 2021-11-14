#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char typechange(char x);

int main(void)
{
	char input;
	scanf_s("%c", &input);
	printf("%c", typechange(input));
	system("pause");
	return 0;
}

char typechange(char x)
{
	char b;
	if(x<97)   b = tolower(x);
	else b = toupper(x);

	return b;
}
