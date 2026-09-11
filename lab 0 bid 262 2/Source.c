#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Нажмите Enter для продолжения...");
	getchar();
	puts("Продолжение программы");
	return 0;
}