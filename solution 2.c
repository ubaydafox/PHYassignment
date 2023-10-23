#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double m1 = 3.0, lambda1 = 530e-9, theta1 = 65.0;
    double m2 = 2.0, lambda2 = 700e-9;
    double d, theta2;

    theta1 = theta1 * PI / 180.0;
    d = m1 * lambda1 / sin(theta1);
    theta2 = asin(m2 * lambda2 / d);
    theta2 = theta2 * 180.0 / PI;
    printf("The second-order bright spot for red light will be at %.2f degrees.\n", theta2);

    return 0;
}
