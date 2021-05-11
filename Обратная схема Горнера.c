#include<stdio.h>
#define SIZE 32

int main()
{
	int x = 12345, base = 16, n;
	char buf[SIZE],*pbuf = buf + SIZE - 1;

	*pbuf-- = 0;

	while (x)
	{
		//printf("%d\n", x%base);
		*pbuf-- = (n = x%base) <10 ? n + '0' : n + 'A' - 10;
		x /= base;
	}
	printf("%s\n", ++pbuf);
	_getch();
	return 0;
}