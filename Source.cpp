#include <iostream>

int main()
{
	system("chcp 1251");

	int a, b;
	scanf_s("%i%i", &a, &b);
	printf("%i\n", a + b);

	system("pause");
	return 0;
}