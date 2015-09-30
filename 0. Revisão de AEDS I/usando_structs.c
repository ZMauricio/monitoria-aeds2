#include <stdio.h>

typedef struct datas {
  int dia;
  int mes;
  int ano;
} data;

int idade(data data_nascimento, data data_atual){
  int idade = data_atual.ano - data_nascimento.ano;

  return idade;
}

int main(int argc, char *argv[]){

  data data_nascimento;
  data data_atual;

  data_nascimento.dia = 25;
  data_nascimento.mes = 7;
  data_nascimento.ano = 1988;

  data_atual.dia = 29;
  data_atual.mes = 9;
  data_atual.ano = 2015;

  printf("Voce tem %d anos\n", idade(data_nascimento, data_atual));

  return 0;
}
