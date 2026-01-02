#include <stdio.h>

int main(){
    double dinheiro, resto = 0;

    scanf("%lf", &dinheiro);

    printf("NOTAS:\n");


    int notas_100 = dinheiro / 100;
    resto = dinheiro - (notas_100 * 100);

    printf("%i nota(s) de R$ 100.00\n", notas_100);


    int notas_50 = resto / 50;
    resto = resto - (notas_50 * 50);

    printf("%i nota(s) de R$ 50.00\n", notas_50);


    int notas_20 = resto / 20;
    resto = resto - (notas_20 * 20);

    printf("%i nota(s) de R$ 20.00\n", notas_20);


    int notas_10 = resto / 10;
    resto = resto - (notas_10 * 10);

    printf("%i nota(s) de R$ 10.00\n", notas_10);

    
    int notas_5 = resto / 5;
    resto = resto - (notas_5 * 5);

    printf("%i nota(s) de R$ 5.00\n", notas_5);


    int notas_2 = resto / 2;
    resto = resto - (notas_2 * 2);

    printf("%i nota(s) de R$ 2.00\n", notas_2);



    printf("MOEDAS:\n");


    int moedas_1 = resto / 1;
    resto = resto - (moedas_1 * 1);

    printf("%i moeda(s) de R$ 1.00\n", moedas_1);


    int moedas_50 = (int)((dinheiro-(int)dinheiro)*100) / 50;
    resto = ((int)((dinheiro-(int)dinheiro)*100)) - (moedas_50 * 50);

    printf("%i moeda(s) de R$ 0.50\n", moedas_50);


    int moedas_25 = resto / 25;
    //printf("\n\nRESTO AKI     %f\n\n", resto);
    resto = resto - (moedas_25 * 25);

    printf("%i moeda(s) de R$ 0.25\n", moedas_25);


    int moedas_10 = resto / 10;
    resto = resto - (moedas_10 * 10);

    printf("%i moeda(s) de R$ 0.10\n", moedas_10);

    
    int moedas_05 = resto / 5;
    resto = resto - (moedas_05 * 5);

    printf("%i moeda(s) de R$ 0.05\n", moedas_05);

        
    int moedas_01 = resto / 1;
    resto = resto - (moedas_01 * 1);

    printf("%i moeda(s) de R$ 0.01\n", moedas_01);

}