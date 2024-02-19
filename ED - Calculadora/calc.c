//aqui serão implementadas as funções que constam no protótipo Ponto.h
//e serão executadas na main

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "calc.h" // inclui os protótipos dessa biblioteca

struct calc {   // definindo a estrutura já declarada no header
    float mem;
};

criarCalc()
{
    Calc *a = malloc(sizeof(Calc));
    a->mem = 0;
    return a->mem;
}

exibirCalc(Calc *c)
{
    printf("Memória: %f\n", c->mem)
}

destruirCalc(Calc *c)
{
    free(c);
}

zerarCalc(Calc *c)
{
    c->mem = 0;
}


float soma(Calc *c, float n)
{
    float n;
    c->mem = c->mem + n;
}

float subt(Calc *c, float n)
{
    float n;
    c->mem = c->mem - n;
}

float mult(Calc *c, float n)
{
    float n;
    c->mem = c->mem * n;
}

float div(Calc *c, float n)
{
    float n;
    c->mem = c->mem / n;
}