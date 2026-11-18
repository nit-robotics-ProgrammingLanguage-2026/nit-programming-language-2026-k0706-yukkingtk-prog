
#include <stdio.h>
#include <math.h>

double rad_to_deg(double rad)
{
    return rad * 180.0 / M_PI;
}

int main(void)
{
    double x;

    scanf("%lf", &x);

    if (x < 0)
    {
        printf("NG");
        return 0;
    }

    double rad = atan(x);
    double deg = rad_to_deg(rad);

    printf("%.2f", deg);

    return 0;
}
