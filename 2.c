#include <stdio.h>
#include <stdlib.h>

int main (){

    int a, b;

    printf("Digie dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    fflush (stdin);

    if (a>b){
        printf("O valor %d eh maior que %d", a, b);
    }
    else{
        printf("O valor %d eh maior que %d", b, a);

    }

    return 0;
}
