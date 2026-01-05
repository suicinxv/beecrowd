# include <stdio.h>

int main(){
    double f1,f2,gdp;

    scanf("%lf %lf", &f1, &f2);

    gdp = (((1+(f1/100))*(1+(f2/100))) - 1) * 100;

    printf("%.6lf\n", gdp);

}