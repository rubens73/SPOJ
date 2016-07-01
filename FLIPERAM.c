#include <stdio.h>

void preencheVetor(int n, int m);
void shortArray(int n, int *vet, int m);

int main()
{
    int n=0;
    int m=0;

    scanf("%d",&n);
    scanf("%d",&m);

    if ((n>=1 && n<=10000) && (m>=1 && m<=500) && (m<=n))
    {
        preencheVetor(n, m);
        return 0;
    }
}

void preencheVetor(int n, int m)
{
    int vet[n];
    int i=0;
    int num=0;

    for(i=0;i<n;i++)
    {
        scanf("%d", &num);
        vet[i]=num;
    }
    shortArray(n,vet, m);
}

void shortArray(int n, int *vet, int m)
{
    int pivo=0;
    int andarilho=0;
    int aux=0;

    for(pivo=0;pivo<n;pivo++)
    {
        for(andarilho=0;andarilho<n;andarilho++)
        {
            if(vet[pivo]>vet[andarilho])
            {
                aux = vet[pivo];
                vet[pivo] = vet[andarilho];
                vet[andarilho]= aux;
            }
        }
    }

    printf("\n");

    for(pivo=0;pivo<m;pivo++)
    {
        printf("%d \n",vet[pivo]);
    }
}
