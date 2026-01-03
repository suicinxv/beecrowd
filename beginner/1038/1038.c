#include <stdio.h>

int main(){
    int product_code, quantity;

    scanf("%i %i", &product_code, &quantity);

    if (product_code == 1)
    {
        printf("Total: R$ %.2f\n", quantity * 4.00);
    }

    if (product_code == 2 )
    {
        printf("Total: R$ %.2f\n", quantity * 4.50);
    }

    if (product_code == 3)
    {
        printf("Total: R$ %.2f\n", quantity * 5.00);
    }

    if (product_code == 4)
    {
        printf("Total: R$ %.2f\n", quantity * 2.00);
    }

    if (product_code == 5)
    {
        printf("Total: R$ %.2f\n", quantity * 1.50);
    }
    

}