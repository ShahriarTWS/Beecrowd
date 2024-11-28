#include <stdio.h>

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int evnCK = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evnCK++;
        }
    }

    printf("%d valores pares\n", evnCK);

    return 0;
}
