#include <stdio.h>
#include <math.h>

int main(){

    double x1,x2,y1,y2;

    scanf("%lf %lf", &x1,&y1);
    scanf("%lf %lf", &x2,&y2);

    printf("%.4lf\n", sqrt(pow(x2-x1,2)+pow(y2-y1,2)));

}