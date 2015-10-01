#include <stdio.h>
/*
Faz uma busca binária pelo numero (o_procurado) em vetor entre os índices indice_esquerda e indice_direita
Pre-condição: vetor está ordenado do menor para o maior elemento.

*/
int busca_binaria_aux(int indice_esquerda, int indice_direita, int vetor[], int o_procurado) {

  if (indice_esquerda == indice_direita) {
    return indice_direita;
  } else {
    int posicao_atual = (indice_direita + indice_esquerda) / 2;

    if (vetor[posicao_atual] > o_procurado) {
      return busca_binaria_aux(indice_esquerda, posicao_atual, vetor, o_procurado);
    } else {
      return busca_binaria_aux(posicao_atual + 1, indice_direita, vetor, o_procurado);
    }
  }
}

int busca_binaria(int tamanho_vetor, int vetor[], int o_procurado) {
  return busca_binaria_aux(0, tamanho_vetor - 1, vetor, o_procurado);
}

int main(int argc, char *argv[]){
  int vetor[] = {2, 3, 4, 5, 6, 7, 8, 9};
  int tamanho_vetor = 8;
  int o_procurado = 7;
  printf("Encontrado na posicao %d\n", busca_binaria(tamanho_vetor, vetor, o_procurado));//comecando a contar do 1

  return 0;
}
