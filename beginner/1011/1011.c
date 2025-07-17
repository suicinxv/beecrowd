#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {

    int r;

    scanf("%i", &r);

    printf("VOLUME = %.3lf\n", (4.0/3) * PI * pow(r, 3));

}