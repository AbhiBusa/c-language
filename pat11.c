#include<stdio.h>
int main()
{
	/*print 1
		    1 2
			1 2 3
			1 2 3 4
			1 2 3 4 5 */			
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	return 0;
}