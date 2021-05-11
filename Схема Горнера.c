#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main(int argc, char *argv[])
{    
	int i = 0, base = 16;
	printf("%d\n", argc);
	char*n = argv[1];
	while (*n)
	{

		i = isdigit(*n) ? (i*base + (*n++) - '0') : (i*base + toupper(*n++) - 'A' + 10);
	}
		printf("%s (%d)=%d (10)\n", argv[1], base, i);
		_getch();
		return 0;

}