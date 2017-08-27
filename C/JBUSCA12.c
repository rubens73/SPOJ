#include <stdio.h>

int main()
{
	int t=0;
	scanf("%d", &t);

	if(t>=1 && t<=1000)
	{
		t = t * 4;
		printf("%d\n", t);
	}
	return 0;
}
