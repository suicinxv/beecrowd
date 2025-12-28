#include <stdio.h>

int main(){
    int money;

    scanf("%i", &money);

    printf("%i\n", money);

    printf("%i nota(s) de R$ 100,00\n", money/100);
    money = money - ((money / 100) * 100);

    printf("%i nota(s) de R$ 50,00\n", money/50);
    money = money - ((money / 50) * 50);

    printf("%i nota(s) de R$ 20,00\n", money/20);
    money = money - ((money / 20) * 20);

    printf("%i nota(s) de R$ 10,00\n", money/10);
    money = money - ((money / 10) * 10);

    printf("%i nota(s) de R$ 5,00\n", money/5);
    money = money - ((money / 5) * 5);

    printf("%i nota(s) de R$ 2,00\n", money/2);
    money = money - ((money / 2) * 2);

    printf("%i nota(s) de R$ 1,00\n", money/1);
    money = money - ((money / 1) * 1);
}