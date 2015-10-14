#include <stdio.h>

/*
Observamos cada loop de maneira individual nos comentarios abaixo.
Neste exemplo temos loops aninhados, por isso as suas complexidades sao multiplicadas:

T(n) = O(log2n * log2n * n) = O(n.log2^ n)

*/
int main(int argc, char *argv[]){

  int n = 5;
  int i, j, k;
  for (i = n; i > 0; i /= 2) {
    /*
      O primeiro loop tem o i inicializado com n e o valor de i eh dividido pela metade a cada iteracao, por isso eh executado a log2n.
      */
    printf("-> 1for: %d\n", i);
    
    for (j = 1; j < n; j *= 2) {
      /*
      O segundo loop tem o j inicializado com 1 e o valor de j duplica a cada iteracao, por isso eh executado a log2n.
      */
      printf("--> 2for: %d\n", j);

      for (k = 0; k < n; k++) {
        /*
        O terceiro loop (mais interno e primeiro a executar por completo) ira executar n vezes.
        k eh inicializado com 0 e a condicao eh ser menor que n, por tanto, n vezes.
        */
        printf("---> 3for: %d\n", k);
    

      }//terceiro loop

    }//segundo loop    

  }//primeiro loop

  return 0;
}
