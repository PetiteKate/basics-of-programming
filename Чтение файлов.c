#include<stdio.h>
#include<ctype.h>

#pragma warning(disable: 4996)

int main()
{
	FILE*fin = NULL;
	int ch, _c = 0;
	char buf[BUFSIZ], *pbuf = buf;

	if ((fin = fopen("Text.txt", "r")) == NULL)
	{
		printf("Error in Foen!\n");
		getchar();
		return -1;
	}
	while ((ch = fgetc(fin)) != EOF)
		putchar(ch);
	{
		if (isalnum(ch))*pbuf++ = ch;
		else if (isalnum(_c))
		{
			*pbuf = 0;
			pbuf = buf;
			printf("%d\n", buf);
		}
		_c = ch;
	}
    fclose(fin);

	getchar();
	return 0;
}