#include<stdio.h>
#include<math.h>

#define pi 3.14159265358979323846
#define N 1000000000.0

int main()
{
    double t1, t2, l1, l2, d; ///l = Lemda, t = Theta.

    int m1, m2;

    l1 = 530 / N;
    l2 = 700 / N;

    t1 = 65.0 * (pi / 180.0);
    m1 = 3;
    m2 = 2;

    d = (m1 * l1) / sin(t1);
    t2 = asin((m2 * l2)/d);

    printf("At %lf angle will the second order bright spot before red light", (t2 * (180/pi)));

    return 0;
}
