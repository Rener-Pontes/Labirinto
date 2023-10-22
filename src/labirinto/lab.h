#ifndef LABIRINTO_H
#define LABIRINTO_H

#define max 6
#define min 2

#include "../libs/list/list.h"

int checa_quant_parametro(int argc);
int checa_parametro_valido(int argc, char **argv);

Graph gerador_labirinto(int q_linhas, int q_colunas);


#endif