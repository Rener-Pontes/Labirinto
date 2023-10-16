#include "labirinto.h"

int main(int argc, char** argv) {
	if (checa_quant_parametro(argc) != 0)
		return 1;
	if (checa_parametro_valido(argc, argv) != 0)
		return 1;
	
}