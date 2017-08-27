#include <stdio.h>

int main ()
{
    int n=0;
    int l=0;
    int c=0;
    int i=0;
    int breaks=0;

    scanf("%d", &n);

    if(n>=1 && n<=100)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&l);
            if(validador(l) !=1)
            return 0;
            scanf("%d",&c);
            if(validador(c) !=1)
            return 0;
            if(l>c)
            {
                breaks=breaks+c;
            }
        }
    }
    printf("%d",breaks);
}

int validador(int x)
{
    if(x>=0 && x<=100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
