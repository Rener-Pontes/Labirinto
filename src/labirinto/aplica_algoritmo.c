#include <stdio.h>

#include "lab.h"
#include "../libs/list/list.h"

extern int num_bfs[1000];
extern int post_dfs[1000];
extern vertex pa_bfs[1000];
extern vertex pa_dfs[1000];

void aplica_bfs(Graph labirinto, vertex inicial, vertex final) {
	GRAPHbfs(labirinto, inicial);

	if (num_bfs[final] == -1) {
		printf("Não é acessível.\n");
		return;
	}

	for (vertex v = final; v != inicial && v != -1; v = pa_bfs[v])
		printf("[[%02d]=>|", v);
	printf("[[%02d]\n", inicial);
}

void aplica_dfs(Graph labirinto, vertex inicial, vertex final) {
	GRAPHdfs(labirinto, inicial);

	if (post_dfs[inicial] < post_dfs[final]) {
		printf("Não é acessível.\n");
		return;		
	}

	for (vertex v = final; v != inicial && v != -1; v = pa_dfs[v])
		printf("[[%02d]=>|", v);
	printf("[[%02d]\n", inicial);

}