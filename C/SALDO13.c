#include<stdio.h>
#define TRUE 1
#define FALSE 0

/*http://br.spoj.com/problems/SALDO13/*/
int validator(int pValidator)
{
    if(pValidator>=(-1000) && pValidator<=1000)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    int input = 0;
    int balance = 0;
    int financial_movement = 0;
    int index = 0;

    scanf("%d", &input);
    if(input>=1 && input<=30)
    {
        scanf("%d",&balance);
        if(validator(balance) == TRUE)
        {
            for(index =0;index<input;index++)
            {
                scanf("%d",&financial_movement);
                if(validator(financial_movement) == TRUE)
                {
                    balance = balance + financial_movement;
                }else{
                    return 0;
                }
            }
        }else{
            return 0;
        }
    printf("%d", balance);
    }else{
        return 0;
    }
}
