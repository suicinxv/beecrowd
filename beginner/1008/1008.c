#include <stdio.h>
 
int main() {

    int number, hours;
    double salary;

    scanf("%i", &number);
    scanf("%i", &hours);
    scanf("%lf", &salary);

    printf("NUMBER = %i\n", number);
    printf("SALARY = U$ %.2lf\n", hours*salary);

}