
#ifndef MY_MAT_H_
#define MY_MAT_H_

#include <stdio.h>

int** GraphBuilder();

int PathFind(int inputMatrix[][]);

int ShortestPath(int inputMatrix[][]);

int dijkstra(int u, int v, int inputMatrix[][]);

#endif /* MY_MAT_H_ */
