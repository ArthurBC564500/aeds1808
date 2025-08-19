#include <stdio.h>
#include <stdlib.h>
int main () {

    float nota;
    char materia [50];

    printf ("digite o nome da materia: ");
    scanf ("%[^\n]", &materia);
    fflush(stdin);

    printf ("digite a nota do aluno: ");
    scanf ("%f", &nota);
    fflush(stdin);


    if (nota >= 60){
        printf ("Aluno aprovado na materia %s", materia);
    }

    else{
        printf ("Aluno reprovado na materia %s", materia);
    }

    return 0;

}
