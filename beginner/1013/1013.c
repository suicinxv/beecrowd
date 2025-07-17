#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1,n2,n3, maior;
    scanf("%i %i %i", &n1, &n2, &n3);

    maior = (n1 + n2 + abs(n1-n2))/2;
    maior = (maior + n3 + abs(maior-n3))/2;
    printf("%i eh o maior\n", maior);

}