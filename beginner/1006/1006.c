#include <stdio.h>

int main(){

    double a,b,c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    printf("MEDIA = %.1lf\n", ((a*2)+(b*3)+(c*5)) / (2+3+5) );

}