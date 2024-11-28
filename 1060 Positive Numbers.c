#include <stdio.h>

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    int posCK = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > 0)
        {
            posCK++;
        }
    }

    printf("%d valores positivos\n", posCK);

    return 0;
}

