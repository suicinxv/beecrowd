#include <stdio.h>

int main(){

    int n;

    scanf("%i", &n);

    printf("%i:%i:%i\n", n/3600, (int)((n/3600.0*60) - (n/3600*60)), n-((n/60)*60));

}