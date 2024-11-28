#include <stdio.h>
int main()
{

    int y=0,m=0,d=0;

    scanf("%d",&d);

    y = d/365;
    d = d%365;
    m = d/30;
    d= d%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);



    return 0;
}
