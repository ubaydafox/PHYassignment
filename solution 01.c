#include <stdio.h>
#include <math.h>

int main() {
    double lambda, m, a1, a2, a3, theta1, theta2, theta3;

    printf("Enter the value of wavelength (in nm): ");
    scanf("%lf", &lambda);
    if (lambda <= 380 || lambda >= 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 1;
    }

    printf("Enter the value of 'm' : ");
    scanf("%lf", &m);

    printf("Enter the values of 'a' for three cases (in micrometers):\n");
    scanf("%lf %lf %lf", &a1, &a2, &a3);

    double sin_theta1, sin_theta2, sin_theta3;
    sin_theta1 = ((lambda * 1e-9)*(m)) / (a1*1e-6);
    sin_theta2 = ((lambda * 1e-9)*(m)) / (a2*1e-6);
    sin_theta3 = ((lambda * 1e-9)*(m)) / (a3*1e-6);

    theta1 = (asin(sin_theta1)*180)/3.1416;
    theta2 = (asin(sin_theta2)*180)/3.1416;
    theta3 = (asin(sin_theta3)*180)/3.1416;

    printf("For a1 = %lf, theta = %lf degree\n", a1, theta1);
    printf("For a2 = %lf, theta = %lf degree\n", a2, theta2);
    printf("For a3 = %lf, theta = %lf degree\n\n", a3, theta3);

    if (theta1 > theta2 && theta1 > theta3) {
        printf("Slit a1=%lf will bent the light more.\n",a1);
    } else if (theta2 > theta1 && theta2 > theta3) {
        printf("Slit a2=%lf will bent the light more.\n",a2);
    } else {
        printf("Slit a3=%lf will bent the light more.\n",a3);
    }

    return 0;
}
