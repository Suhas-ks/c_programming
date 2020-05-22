#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[50] = {10, [2] = 500, [3] = 600, [37] = 42};
	for(int i=0; i<50; ++i)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}