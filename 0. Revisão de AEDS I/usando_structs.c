#include <stdio.h>

struct data {
  int dia;
  int mes;
  int ano;
} x;
typedef struct dma data;

int idade(data data_nascimento, data data_atual)

int main(int argc, char *argv[]){

  data data_nascimento;
  data data_atual;

  data_nascimento.dia = 25;
  data_nascimento.mes = 7;
  data_nascimento.ano = 1988;

  data_atual.dia = 29;
  data_atual.mes = 9;
  data_atual.ano = 2015;


  printf("Hello, World!\n");

  return 0;
}
