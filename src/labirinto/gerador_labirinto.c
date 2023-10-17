#include <stdio.h>
#include <stdlib.h>

#include "lab.h"
#include "../libs/list/list.h"

static Graph gerador_matriz_grade(int q_linhas, int q_colunas) {
	int total_vertices = q_linhas * q_colunas;
	Graph novo = GRAPHinit(total_vertices);

	cria_arcos_horizontais(novo, q_linhas, q_colunas, total_vertices);
	cria_arcos_verticais(novo, q_linhas, q_colunas, total_vertices);

	return novo;
}

static void  cria_arcos_horizontais(Graph grafo_grade, int q_linhas, int q_colunas, int total_vertices) {
	for(int i = 0; i < q_linhas; i++) {
		for (int j = 0; j < q_colunas - 1; j++) {
			int indice_vertice_atual = i * q_colunas + j;

			if (indice_vertice_atual >= total_vertices - 1)	break;

			UGRAPHinsertArc(grafo_grade, indice_vertice_atual, indice_vertice_atual + 1);
		}
	}
}

static void  cria_arcos_verticais(Graph grafo_grade, int q_linhas, int q_colunas, int total_vertices) {
	for (int i = 0; i < q_linhas; i++) {
		for (int j = 0; j < q_colunas; j++) {
			int indice_vertice_atual = i * q_colunas + j;

			if (indice_vertice_atual >= total_vertices - q_colunas)	break;

			UGRAPHinsertArc(grafo_grade, indice_vertice_atual, indice_vertice_atual + q_colunas);
		}
	}
}