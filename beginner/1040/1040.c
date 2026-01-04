# include <stdio.h>

int main(){
    float n1, n2, n3, n4, media, exame;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / (2 + 3 + 4 + 1);

    printf("Media: %.1f\n", media);

    if ( media >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    if ( media < 5 ){
        printf("Aluno reprovado.\n");
    }
    if ( media >= 5 && media <= 6.9 )
    {
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        media = (exame+media)/2;
        printf("Nota do exame: %.1f\n", exame);
        if (media >= 5)
        {
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    }
    
    
}