#include <stdio.h>

int main()
{
    int proCode1, proCode2, proUnit1, proUnit2;
    float proPrice1, proPrice2;

    scanf("%d%d%f", &proCode1, &proUnit1, &proPrice1);
    scanf("%d%d%f", &proCode2, &proUnit2, &proPrice2);

    printf("VALOR A PAGAR: R$ %.2f\n", (proUnit1 * proPrice1) + (proUnit2 * proPrice2));

    return 0;
}
