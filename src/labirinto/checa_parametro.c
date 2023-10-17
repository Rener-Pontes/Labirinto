#include "lab.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checa_quant_parametro(int argc){
	if(!(argc == max || argc == min)){
		printf("Quantidade de parametros invalidas.\n");
		return 1;
	}else{
		return 0;
	}
}

int checa_parametro_valido(int argc, char** argv){
	if (argc == min) {
		if(strcmp(argv[1], "--h") == 0 || strcmp(argv[1], "--help") == 0) {
			printf("maze ql qc alg s t\n");
			printf("maze --h/--help\n");
			printf("maze --v/--version\n");
			printf("ql = Quantidade de linhas\n");
			printf("qc = Quantidade de colunas\n");
			printf("alg = Algoritmo de busca - bfs / dfs\n");
			printf("s = Origem da busca\n");
			printf("t = Destino da busca\n");
			printf("--h ou --help\n");
			printf("--v ou --version\n");

			exit(0);
		} else if ((strcmp(argv[1], "--v") == 0 || strcmp(argv[1], "--version") == 0)){
			printf("versao 276238891\n");
			printf("Autores: Lívia Batalha e Rener Pontes\n");

			exit(0);
		} else {
			printf("Parâmetro inválido. Use --help ou --version.\n");
			return 1;
		}
	} else if (argc == max) {
		if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0) {
			printf("Quantidade linhas ou colunas inválidas.\n");
			return 1;
		} if (strcmp(argv[3], "bfs") != 0 && strcmp(argv[3], "dfs") != 0) {
			printf("Algoritmo inválido.\n");
			return 1;
		} if (strcmp(argv[4], argv[5]) == 0) {
			printf("Saída e entrada não podem ser iguais.\n");
			return 1;
		} if (strcmp(argv[4], "u") != 0 && strcmp(argv[4], "d") != 0) {
			printf("Entrada deve ser cima(u) ou baixo(d).\n");
			return 1;
		} if (strcmp(argv[5], "u") != 0 && strcmp(argv[5], "d") != 0) {
			printf("Saída deve ser cima(u) ou baixo(d).\n");
			return 1;
		}
	} 
	
	return 0;
}