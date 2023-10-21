#include <stdlib.h>

#include "labirinto/lab.h"
#include "libs/list/list.h"


int main(int argc, char** argv) {
	if (checa_quant_parametro(argc) != 0) {
		printf("Utilize ./<nome executável> --help para saber as opções de ajuda");
		return 1;
	}
	if (checa_parametro_valido(argc, argv) != 0) {
		printf("Utilize ./<nome executável> --help para saber as opções de ajuda");
		return 1;
	}
}