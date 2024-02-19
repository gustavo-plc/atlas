//arquivo somente de protótipo das funções
//as funções são implementadas em outro arquivo .c

// esse .h é um arquivo de cabeçalho da linguagem c, um header.

#ifndef CALC_H  //sempre utilizar essa sintaxe
#define CALC_H

typedef struct calc Calc;  //renomeação da estrutura para chamá-la somente de Calc

Calc criarCalc(); 

void destruirCalc();
void zerarCalc();
float exibirCalc(void)

float soma(Calc *c, float n);
float subt(float n1, float n2);
float mult(float n1, float n2);
float div(float n1, float n2);



#endif