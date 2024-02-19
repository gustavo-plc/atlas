//aqui serão implementadas as funções que constam no protótipo Ponto.h
//e serão executadas na main

#include <stdlib.h>
#include <math.h>

#include "calc.h" // inclui os protótipos dessa biblioteca

struct calc {
    float mem;
};


// calcula a distância entre dois pontos
float ponto_distancia(Ponto *p1, Ponto *p2) {
    if(!p1 || !p2) return -1;
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}


float soma(Calc c, float b)
{
    float n2;
    Calc a;
    a->mem = a->mem + n2;
}

float subt(float n1, float n2)
{
    float n2;
    Calc a;
    a->mem = a->mem - n2;
}

float mult(float n1, float n2)
{
    float n2;
    Calc a;
    a->mem = a->mem * n2;
}

float div(float n1, float n2)
{
    float n2;
    Calc a;
    a->mem = a->mem / n2;
}

float exibirmem(void)
{
    prin
}

float apagarmem(void) 
{


}