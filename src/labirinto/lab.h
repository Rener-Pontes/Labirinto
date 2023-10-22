#ifndef LABIRINTO_H
#define LABIRINTO_H

#define max 6
#define min 2

#define QL_INDEX 1
#define QC_INDEX 2
#define ALG_INDEX 3
#define S_INDEX 4
#define T_INDEX 5

#include "../libs/list/list.h"

int checa_quant_parametro(int argc);
int checa_parametro_valido(int argc, char **argv);

Graph gerador_labirinto(int q_linhas, int q_colunas);

void aplica_bfs(Graph labirinto, vertex inicial, vertex final);
void aplica_dfs(Graph labirinto, vertex inicial, vertex final);

#endif