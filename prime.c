#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool k = false;
    int c;
    printf("Númdos primos:\nNúmero: ");
    scanf("%d", &c);
    for (int i = 2; i < c; i++)
    {
        if (c % i == 0)
        {
            k = true;
            break;
        }
    }
    if (k == true)
        printf("%d no es primo\n", c);
    else
        printf("%d es primo\n", c);
    return 0;
}