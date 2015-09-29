#include <stdio.h>

/*
Um ponteiro eh uma variavel que ira guardar um endereco de memoria, ou seja, a referencia de onde o conteudo dessa variavel esta alocada.
Referencia: http://www.ime.usp.br/~pf/algoritmos/aulas/pont.html
*/

int main(int argc, char *argv[]){

    int variavel_qualquer;
    int *ponteiro1, *ponteiro2;

    ponteiro1 = &variavel_qualquer;//guarda o endereco da memoria onde esta essa variavel
    ponteiro2 = ponteiro1;

    printf("%p", ponteiro2);
    
    return 0;
}
