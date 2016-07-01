#include<stdio.h>

int main()
{
    int n=0;
    int x=0;
    int i=0;
    int soma=0;

    scanf("%d", &n);
    if(n>=0 && n<=50)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            if(x<0)
            {
                x=x*(-1);
            }
            if(x>5000)
            {
                return 0;
            }
            else
            {
                soma = soma+x;
            }
        }
        printf("%d",soma);
    }
    else
    {
        return 0;
    }
}
