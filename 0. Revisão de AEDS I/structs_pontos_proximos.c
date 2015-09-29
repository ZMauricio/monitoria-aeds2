#include <stdio.h>
#include <math.h>

/*
Exercicio da lista de AEDS II - Codigo do Professor Sebastian Urrutia

Compilacao: gcc structs_pontos_proximos.c -o structs_pontos_proximos -lm

*/

struct Ponto {
  float x;
  float y;
};

float Dist(struct Ponto a, struct Ponto b) {
  float dx = a.x - b.x;
  float dy = a.y - b.y;
  return sqrt(dx * dx + dy * dy);
}

int main() {
  struct Ponto v[1000];
  FILE* f;
  int n;
  // Leitura dos dados.
  f = fopen("pontos.txt", "r");
  fscanf(f, "%d", &n);

  int i;
  for (i = 0; i < n; ++i) {
    fscanf(f, "%f", &v[i].x);
    fscanf(f, "%f", &v[i].y);
  }
  // Iteração do algoritmo.
  while (1) {
    struct Ponto p;
    float r;
    printf("Digite as coordenadas X e Y do ponto de origem:\n");
    scanf("%f", &p.x);
    scanf("%f", &p.y);
    printf("Digite o raio de interesse:\n");
    scanf("%f", &r);
    printf("Os pontos mais proximos sao:\n");

    int i;
    for (i = 0; i < n; ++i) {
      if (Dist(p, v[i]) <= r) {
        printf("(%.1f, %.1f)\n", v[i].x, v[i].y);
      }
    }
  }
  return 0;
}
