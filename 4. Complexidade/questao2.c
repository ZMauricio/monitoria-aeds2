#include <stdio.h>

/*
Observamos cada loop de maneira individual nos comentarios abaixo.
Neste exemplo temos loops aninhados, por isso as suas complexidades sao multiplicadas:

T(n) = O(log2n * log2n * n/2) = O(n/2.log^2 n)

*/
int main(int argc, char *argv[]){

  int n = 4;
  int sum = 0;
  int i, j, k;

  for (i = 1; i < n; i *= 2) {
    /*
      O primeiro loop tem o i inicializado com 1 e o valor de i duplica a cada iteracao, por isso eh executado a log2n.
      */
    printf("-> 1for: %d\n", i);
    
    for (j = n/2; j > 0; j /= 2) {
      /*
      O segundo loop tem o j inicializado com n/2 (um numero par) e seu valor caiu pela metade a cada iteracao, por isso eh executado a log2n.
      */
      printf("--> 2for: %d\n", j);

      for (k = j; k < n; k++) {
        /*
        O terceiro loop (mais interno e primeiro a executar por completo) e tera executado n - j vezes; 
        o maior valor possivel de j eh n/2 (por conta do ciclo 2) e por isso este ciclo sera executado O(n) vezes. 
        Caso tenha ficado com duvidas sobre este ciclo ser O(n/2) ao inves de O(n) basta pensar que se temos O(n) e O(n/2) ambas
         serao no final das contas O(n) pois quando n tende ao infinito o custo de ambas sera o mesmo.

        */
        printf("---> 3for: %d\n", k);
    
        sum += (i + j * k);

      }//terceiro loop

    }//segundo loop    

  }//primeiro loop

  return 0;
}
