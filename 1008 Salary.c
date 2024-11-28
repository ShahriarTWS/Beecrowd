#include <stdio.h>

int main()
{
    int employee, workHour;

    float sph;

    scanf("%d", &employee);
    scanf("%d", &workHour);
    scanf("%f", &sph);

    printf("NUMBER = %d\n", employee);
    printf("SALARY = U$ %.2f\n", workHour * sph);

    return 0;
}
