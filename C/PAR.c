#include <stdio.h>
#include <string.h>

int validaEntrada(int n);
int validaNome(char *nome);

int main()
{
    int n=0;
    char *nome1;
    char *nome2;

    scanf("%d", &n);
    printf("n %d\n",n);
    if(validaEntrada(n) == 1)
    {
        scanf("%s", nome1);
        printf("nome1 %s", nome1);
        printf("resultado %d\n",validaNome(nome1));
    }
    return 0;
}

int validaEntrada(int n)
{
    if(n>0 && n<1000)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int validaNome(char *nome)
{
    int count=0;
    char ch='0';
    for(count=0;((ch != '\0') && (count<12));count++)
    {
        ch=nome[count];
    }

   if(count>=1 && count<=10)
    {
    return 1;
    }
    else
    {
    return 0;
    }
    return 0;
}
