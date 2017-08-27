#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n=0;
	int t=0;
	int v=0;
	int d=0;
	int Sd=0;

	scanf("%d", &n);

	if (n>=1 && n<=1000)
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &t);
			if(t<= 1 && t>=100)
			{
				return 0;
			}
			scanf("%d", &v);
			if(v<= 0 && v>=120)
			{
				return 0;
			}

			d = t*v;
			Sd = Sd + d;
		}
	}

	printf("%d", Sd);

	return 0;
}
