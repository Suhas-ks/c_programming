#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	int i,j;
	for(i=0; i < 2; ++i)
	{
		for(j=0; j<3; ++j)
		{
			printf("%d ",a[i][j]);
		}
	}
	printf("\n");
	
	int b[3][4] = {
		{1, 2, 3},   /* initialize first three elements of each row in the array*/
		{4, 5, 6},
		{7,8,9}
	};
	for(i=0; i < 3; ++i)
	{
		for(j=0; j<4; ++j)
		{
			printf("%d ",b[i][j]);
		}
	}
	return 0;
}