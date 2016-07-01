#include <stdio.h>

int fatorial(int n);

int main(void)
{
	int n=0;
	scanf("%d",&n);

	if(n<0 || n>12)
	{
        return 0;
	}
	else
	{
        printf("%d",fatorial(n));
	}

}

int fatorial(int n)
{
    if(n == 0)
    {
        return 1;
    }else
    {
        return fatorial(n-1)*n;
    }
}
