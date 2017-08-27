#include <stdio.h>

int main()
{
    int n=0;
    int i=0;
    int sim=0;
    int nao=0;

    scanf("%d", &n);

    if(n > 2147483647)
    {
        return 0;
    }

    else if (n == 1)
    {
        printf("sim");
    }

    else
    {
        if(n<0)
        {
            n = n*(-1);
        }
        for(i=1;i<=n;i++)
        {

            if(n%i == 0 || n == i)
            {
               sim++;
            }
            if(n%i == 0 && n != i)
            {
                nao++;
            }
        }
        if(nao > 0 && sim != 1)
        {
            printf("nao");
        }
        else if (nao != 0  && sim == 1)
        {
         printf("sim");
        }
    }
}
