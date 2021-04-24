#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include "short_route_dijustla.h"
typedef char VertexType; //定义图的邻接表矩阵
typedef struct Graph {
	VertexType ver[MaxSize];
	int edg[MaxSize][MaxSize];
}Graph;

void CreateGraph(Graph *g){
	int i,j;
	int VertexNum;
	VertexType Ver;
	while('\n' != (Ver=getchar())){
		g->ver[i++] = Ver;
	}
	g->ver[i] = '\0';
	VertexNum = strlen(g->ver);
	for(i = 0; i < VertexNum; i++){
		for(j = 0; j < VertexNum; j++){
			scanf("%d", &g->edg[i][j]);
		}
	}
}
void 
