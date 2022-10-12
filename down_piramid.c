/* To print the following pattern.
55555
4444
333
22
1
*/
#include <stdio.h>
#define ROW 5

int main()
{
	for(int r=ROW; r>=1; r--)
	{
		for(int c=1; c<=r; c++)
		{
			printf("%d", r);
		}
		printf("\n");
	}
	return 0;
}  
