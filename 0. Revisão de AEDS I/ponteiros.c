#include <stdio.h>

/*
Um ponteiro eh uma variavel que ira guardar um endereco de memoria, ou seja, a referencia de onde o conteudo dessa variavel esta alocada.
Ponteiros melhoram o desempenho de um programa. Por exemplo, ao passar uma variavel para uma funcao, eh feita uma copia dessa variavel, alocando memoria por duas vezes.
Passando apenas o ponteiro dessa variavel, economizamos em memoria.
Exemplo do livro C Completo e Total (capitulo 5)
*/
int main(int argc, char *argv[]){

    int variavel_qualquer;
    int *ponteiro1, *ponteiro2;

    ponteiro1 = &variavel_qualquer;//guarda o endereco da memoria onde esta essa variavel
    ponteiro2 = ponteiro1;

    printf("%p", ponteiro2);

    return 0;
}
