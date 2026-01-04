# include <stdio.h>

#define LEN_LIST 3

void bubbleSort(int *lista){
    int i, j, aux;
    i = j = aux = 0;

    for ( i = 0 ; i < LEN_LIST - 1; i++)
    {
        for ( j = 0 ; j < LEN_LIST - i - 1 ; j++)
        {
            if (lista[j] > lista[j+1])
            {
                aux = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = aux;
            }
        }
    }

}

int main(){
    int lista_input[3], lista_ordenada[3], i, j;

    for ( i = 0; i < LEN_LIST; i++)
    {
        scanf("%i", &lista_input[i]);
        lista_ordenada[i] = lista_input[i];
    }
    
    bubbleSort(lista_ordenada);
    
    for (i = 0; i < LEN_LIST; i++)
    {
        printf("%i\n", lista_ordenada[i]);
    }

    printf("\n");

    for (i = 0; i < LEN_LIST; i++)
    {
        printf("%i\n", lista_input[i]);
    }

}