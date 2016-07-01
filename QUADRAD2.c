#include <stdio.h>

int main(void)
{
	int n=0;
	if(n<0)
	{
		n=n*(-1);
	}
	if(n<10000)
	{
        scanf("%d",&n);
		printf("%d", n*n);
	}else{
		return 0;
	}
	return 0;
}
