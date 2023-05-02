#include<stdio.h>

int main()
{
	int a=5;
	char b=1;
	char c=3;

	while(b&c)
	{
		printf("%d : %d\n",c,b);
			b=b<<1;
	}


	return 0;
}
