#include <stdio.h>

/*Referencia: http://www.ime.usp.br/~pf/algoritmos/aulas/recu.html#Fibonacci */

int maximo_iterativo (int numero_elementos, int vetor[]) {
  int i, maior_encontrado;
  maior_encontrado = vetor[0];

  for (i = 1; i < numero_elementos; i++){
    if (maior_encontrado < vetor[i]){
      maior_encontrado = vetor[i];
    }
  }

  return maior_encontrado;
}

int maximo_recursivo (int numero_elementos, int vetor[]){
   if (numero_elementos == 1)
      return vetor[0];
   else {
      int maior_encontrado;
      maior_encontrado = maximo_recursivo (numero_elementos - 1, vetor);  /* máximo de vetor[0..n-2] */
      if (maior_encontrado > vetor[numero_elementos - 1]){
        return maior_encontrado;
      }else{
        return vetor[numero_elementos - 1];
      }
   }
}

int main(int argc, char *argv[]){
  int numero_elementos = 8;
  int vetor[] = {8, 5, 9, 13, 67, -2, 0, 4};

  printf("O maior encontrado foi %d\n", maximo_iterativo(numero_elementos, vetor));//maximo iterativo
  printf("O maior encontrado foi %d\n", maximo_recursivo(numero_elementos, vetor));//maximo recursivo

  return 0;
}
