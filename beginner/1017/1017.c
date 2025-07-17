#include <stdio.h>

int main(){
    int hours, speed;
    scanf("%i", &hours);
    scanf("%i", &speed);

    printf("%.3lf\n",(hours*speed)/12.0);

}
