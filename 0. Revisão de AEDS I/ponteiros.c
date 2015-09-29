#include <stdio.h>

/*
Um ponteiro eh uma variavel que ira guardar um endereco de memoria, ou seja, a referencia de onde o conteudo dessa variavel esta alocada.
Referencia: http://www.ime.usp.br/~pf/algoritmos/aulas/pont.html
*/

void troca (int *p, int *q){
   printf("Primeiro: %d\n", *p);
   printf("Segundo: %d\n\n", *q);
   int temp;
   temp = *p;
   *p = *q;
   *q = temp;

   printf("Primeiro: %d\n", *p);
   printf("Segundo: %d\n", *q);

}

int main(int argc, char *argv[]){

    //Declaracao e atribuicao
    int variavel_qualquer;
    int *ponteiro1, *ponteiro2;

    ponteiro1 = &variavel_qualquer;//guarda o endereco da memoria onde esta essa variavel
    ponteiro2 = ponteiro1;

    printf("%p\n\n", ponteiro2);

    //Troca de dois valores inteiros
    int primeiro_numero = 1;
    int segundo_numero = 2;
    int *ponteiro_primeiro, *ponteiro_segundo;
    ponteiro_primeiro = &primeiro_numero;
    ponteiro_segundo = &segundo_numero;

    troca(ponteiro_primeiro, ponteiro_segundo);

    return 0;
}
