//a program for FINDING OUT VELOCITY,by SAAD.

#include<stdio.h>




int main() {
    float u, a, t, v;

    printf("Enter initial velocity (m/s): ");
    scanf("%f", &u);

    printf("Enter acceleration (m/s²): ");
    scanf("%f", &a);

    printf("Enter time (s): ");
    scanf("%f", &t);

    // Calculating final velocity
    v = u + (a * t);

    printf("Final velocity (m/s) = %.2f\n", v);

    return 0;
}
