#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, a;
int mat1[15], mat2[10];

int main(void){

    setlocale(LC_ALL, "Portuguese");

    for(i=0 ; i<5; i++){

        printf("DIGITE AS MATRÍCULAS DOS ALUNOS DE LÓGICA DE PROGRAMAÇÃO: ");
        scanf("%d", &mat1[i]);
    }

    printf("\n");

    for(i=0; i<5; i++){

        printf("DIGITE AS MATRÍCULAS DOS ALUNOS DE LINGUAGEM DE PROGRAMAÇÃO: ");
        scanf("%d", &mat2[i]);
    }

    printf("\n");

    for(i=0; i<5; i++){

        for(a=5; a>=0; a--)
        {
            if(mat1[i] == mat2[a] || mat1[a] == mat2[i]) printf("AS MATRÍCULAS IGUAIS SÃO: %d\n", mat1[i]);
        }
    }

return 0;
}
