#include "lab.h"
#include "../libs/list/list.h"

extern vertex pa_dfs[1000];
extern vertex pa_bfs[1000];

void aplica_bfs(Graph labirinto, vertex inicial, vertex final) {
	GRAPHdfs(labirinto);

	for (vertex v = final; v != inicial; v = pa_dfs[v])
		printf("[[%02d]=>", v);

	printf("[[%02d]=>", inicial);
}

void aplica_dfs(Graph labirinto, vertex inicial, vertex final) {
	GRAPHbfs(labirinto, inicial);

	for (vertex v = final; v != inicial; v = pa_bfs[v])
		printf("[[%02d]=>", v);
	
	printf("[[%02d]=>", inicial);
}