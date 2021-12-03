#include <my_mat.h>


int** GraphBuilder() {

	int matrixInput[10][10];
	int cellValue;
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			scanf("%d", &cellValue);
			matrixInput[i][j] = cellValue;
		}
	}
	return matrixInput;
}

int PathFind(int inputMatrix[][]) {
	int i, j;
	scanf("%d", &i);
	scanf("%d", &j);
	if (dijkstra(i, j, inputMatrix) != -1) {
		return 0;
	}
	else return -1;
}

int ShortestPath(int inputMatrix[][]) {
	int i, j;
	scanf("%d", &i);
	scanf("%d", &j);
	return (diskstra(i, j, inputMatrix));
}

int dijkstra(int u, int v, int inputMatrix[][]) {

	int visited[10] = {0};
	int unvisited[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int shortestPathFromU[10] = {999};
	shortestPathFromU[0] = 0;
	int i;
	int prevVertix = 0;
	int minEdge = 999, vertixWithMinEdge = 0;
	int iteration = 0;
	while(u!=v && iteration <10){
		for (i = 0; i < 10; i++) {
			if(inputMatrix[u][i] != 0){
				if(shortestPathFromU[i] > shortestPathFromU[prevVertix] + inputMatrix[u][i]){
					shortestPathFromU[i] = shortestPathFromU[prevVertix] + inputMatrix[u][i];
				}
				if(minEdge > inputMatrix[u][i]){
					minEdge = inputMatrix[u][i];
					vertixWithMinEdge = i;
				}
			}
		}
		u=vertixWithMinEdge;
		minEdge = 999, vertixWithMinEdge = 0;
		iteration++;
	}

	if(shortestPathFromU[v] == 999){
		return -1;
	}
	else {
		return shortestPathFromU[v];
	}
}

