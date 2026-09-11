#include <locale.h>
#include <stdio.h>

void name();
void date();


void main()
{
	name();
	date();

}

void name()

{
	setlocale(LC_CTYPE, "RUS");
	puts("                         **********************************************");
	puts("                         *                                            *");
	puts("                         * тема лр: Разработка консольного приложения *");
	puts("                         *             Выполнил Быханов А.А.          *");
	puts("                         *                                            *");
	puts("                         **********************************************");
	return 0;
}

void date()
{
	puts("                                    _        _   _     _   _   ");
	puts("                                   | |  /|: | | | | : | | | |  ");
	puts("                                   | |   |: | |  -  : | |  -   ");
	puts("                                   | |   |: | | | | : | | | |  ");
	puts("                                    -        -   -     -   -   ");
}
