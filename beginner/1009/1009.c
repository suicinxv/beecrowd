#include <stdio.h>
 
int main() {
 
    char nome[50];
    double fixed_salary, total_sales;

    scanf("%s", nome);
    scanf("%lf", &fixed_salary);
    scanf("%lf", &total_sales);

    printf("TOTAL = R$ %.2lf\n", fixed_salary+(0.15*total_sales));
}