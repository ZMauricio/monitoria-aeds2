#include <stdio.h>

/*
Struct eh uma estrutura que abriga diversas variaveis (como em um dicionario) que se referem a uma mesma entidade de dados
Por exemplo:  uma struct chamada de Pessoa pode ter variaveis como endereco, telefone e nome. Sao tres variaveis diferentes mas todas abrigadas em uma estrutura so,
para facilitar o agrupamento e a manipulacao dos dados.
Referencia: http://www.ime.usp.br/~pf/algoritmos/aulas/stru.html
*/

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
