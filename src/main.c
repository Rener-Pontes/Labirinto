#include <time.h>
#include <stdlib.h>

#include "labirinto/lab.h"
#include "libs/list/list.h"

static vertex escolhe_vertice_superior(int qc);
static vertex escolhe_vertice_inferior(int ql, int qc);

int main(int argc, char** argv) {
	if (checa_quant_parametro(argc) != 0) {
		printf("Utilize ./<nome executável> --help para saber as opções de ajuda");
		return 1;
	}
	if (checa_parametro_valido(argc, argv) != 0) {
		printf("Utilize ./<nome executável> --help para saber as opções de ajuda");
		return 1;
	}

	int ql = atoi(argv[QL_INDEX]), 
		qc = atoi(argv[QC_INDEX]);
	Graph labirinto = gerador_labirinto(ql, qc);
	char* alg = argv[ALG_INDEX];
	char s = argv[S_INDEX][0],
		 t = argv[T_INDEX][0];
	vertex vertice_inicial = s == 'u' ? escolhe_vertice_superior(qc) : escolhe_vertice_inferior(ql, qc);
	vertex vertice_final   = t == 'u' ? escolhe_vertice_superior(qc) : escolhe_vertice_inferior(ql, qc);
}

static vertex escolhe_vertice_superior(int qc) {
	srand(time(NULL));

	return rand() % qc;
}
static vertex escolhe_vertice_inferior(int ql, int qc) {
	srand(time(NULL));
	
	return (ql - 1) * qc + rand() % qc;
}