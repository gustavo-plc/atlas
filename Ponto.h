//arquivo somente de protótipo das funções
//as funções são implementadas em outro arquivo .c

// esse .h é um arquivo de cabeçalho da linguagem c, um header.

#ifndef PONTO_H
#define PONTO_H 1

typedef struct ponto Ponto;  //renomeação da estrutura para chamá-la somente de Ponto

Ponto* ponto_cria(float x, float y);
void ponto_libera(Ponto *p);
int ponto_acessa(Ponto *p, float *x, float *y);
int ponto_atribui(Ponto *p, float x, float y);
float ponto_distancia(Ponto *p1, Ponto *p2);

#endif  //