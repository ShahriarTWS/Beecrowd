#include <stdio.h>

int main()
{
    char name, d;
    double salary, sell;

    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sell);

    printf("TOTAL = R$ %.2lf\n", salary + (sell * 0.15));

    return 0;
}
