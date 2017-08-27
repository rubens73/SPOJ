#include <stdio.h>

int main()
{
    int n=0;
    int m=0;

    scanf("%d", &n);
    scanf("%d", &m);

    if((n>=1 && n<=40) && (m>=1 && m<=40))
    printf("%d", (n-m));
}
