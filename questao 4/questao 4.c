#include <stdio.h>

int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a)  OK*/
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);

  /* (b) ok */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);

  /* (c) ok*/
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);

  /* (d) ok*/
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);

  /* (e)  ok*/
  p3 = nome;
  printf("%c \n", *p3);

  /* (f) ok*/
  p3 = p3 + 4;
  printf("%c \n", *p3);

  /* (g) ok*/
  p3--;
  printf("%c \n", *p3);

  /* (h) ok*/
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);

  /* (i) ok*/
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);

  /* (j) ok*/
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);

  /* (l) ok*/
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);

  /* (m) ok*/
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);

  /* (n) ok */
  p5++;
  printf("%d \n", *p5);
  return(0);
}
