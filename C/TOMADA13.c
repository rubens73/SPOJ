#include<stdio.h>

int main()
{
	int t=0;
	int i=0;
	int total=0;

	for(i=0;i<4;i++)
	{
		scanf("%d", &t);

		if(t>=2 && t<=6)
		{
			total = total + t;
		}
		else
		{
			return 0;
		}
	}
	total = total-3;
	printf("%d", total);
	return 0;
}
