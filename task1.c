#include <stdio.h>

int main()
{
    int k = 201;
    while (1 == 1)
    {
        if (k%17 == 0)
        {
            printf("(n > 200)/17 = %d(17 * %d)\n", k, k/17);
            break;
        }
        k++;
    }
    return 0;
}