//arquivo somente de protótipo das funções
//as funções são implementadas em outro arquivo .c

// esse .h é um arquivo de cabeçalho da linguagem c, um header.

#ifndef CALC_H  //sempre utilizar essa sintaxe
#define CALC_H

typedef struct calc Calc;  //renomeação da estrutura para chamá-la somente de Calc

Calc criarCalc(); 

void destruirCalc();
void zerarCalc();
void exibirCalc()

void soma(Calc *c, float n);
void subt(Calc *c, float n);
void mult(Calc *c, float n);
void div(Calc *c, float n);

#endif