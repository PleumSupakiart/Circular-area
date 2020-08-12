#include <stdio.h>
int main()
{
    float pi = 22.0 / 7.0, r, ans;
    scanf_s("%f", &r);
    ans = pi * r * r;
    printf("%.2f\n", ans);

    if (ans <= 250)
    {
        printf("Small circle\n");
    }
    else if (ans <= 500)
    {
        printf("Middle circle\n");
    }
    else if (ans <= 750)
    {
        printf("Big circle\n");
    }
    else
    {
        printf("Larg Ciecle\n");
    }
    printf("End Program");
    return 0;
}