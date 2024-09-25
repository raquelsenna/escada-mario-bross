#include <stdio.h>
#include <cs50.h>


int piramide(int num)
{
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j <= num - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}


int main(void)
{
    while (1)
    {
        int num = get_int("\nNumero: ");

        if (num > 0)
        {
            piramide(num);
        }
    }
}
