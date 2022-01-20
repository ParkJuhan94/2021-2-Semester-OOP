/*
    0
   / \ 
   1  2
  /\  /\
  3 4 5 6

1, 0번 정점에 대한 탐색을 수행합니다.
2, 1번 정점에 대한 탐색을 수행합니다.
3, 3번 정점에 대한 탐색을 수행합니다.
4, 3번 정점에서 더 탐색할 것이 없으므로, 1번 정점에 대한 탐색을 계속해서 진행합니다.
5, 4번 정점에 대한 탐색을 수행합니다.
6, 4번 정점에 대해 더 탐색할 것이 없고, 1번 정점에 대해서도 더이상 탐색을 진행할 것이 없습니다. 0번 정점에 대한 탐색을 계속해서 진행합니다.
7, 2번 정점에 대한 탐색을 수행합니다.
8, 5번 정점에 대한 탐색을 수행합니다.
9, 5번 정점에서 더 탐색할 것이 없으므로, 2번 정점에 대한 탐색을 계속해서 진행합니다.
10, 6번 정점에 대한 탐색을 수행합니다.
11, 탐색을 마쳤습니다.

----> 그래프(by 인접행렬), 재귀함수, 스택의 LIFO 성질 사용

*/
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define MAX_VERTICES 50

typedef struct GraphType {
    int n;
    int adj_mat[MAX_VERTICES][MAX_VERTICES];
}GraphType;

int visited[MAX_VERTICES];

void init(GraphType* g) {
    int r, c;
    g->n = 0;
    for (r = 0; r < MAX_VERTICES; r++)
        for (c = 0; c < MAX_VERTICES; c++)
            g->adj_mat[r][c] = 0;
}

void insert_vertex(GraphType* g, int v) {
    if (((g->n) + 1) > MAX_VERTICES) {
        fprintf(stderr, "overflow");
        return;
    }
    g->n++;
}


void insert_edge(GraphType* g, int start, int end) {
    if (start >= g->n || end >= g->n) {
        fprintf(stderr, "vertex index error");
        return;
    }
    g->adj_mat[start][end] = 1;
    g->adj_mat[end][start] = 1;
}

void dfs_mat(GraphType* g, int v) {
    int w;
    visited[v] = TRUE;
    printf("visit %d -> ", v);

    for (w = 0; w < g->n; w++)
        if (g->adj_mat[v][w] && !visited[w])
            dfs_mat(g, w);
}


int main(void) {
    GraphType* g;
    g = (GraphType*)malloc(sizeof(GraphType));
    init(g);
    for (int i = 0; i < 7; i++)
        insert_vertex(g, i); //그래프 정점 생성
    insert_edge(g, 0, 1);  // 그래프 간선 생성
    insert_edge(g, 0, 2);
    insert_edge(g, 1, 3);
    insert_edge(g, 1, 4);
    insert_edge(g, 2, 5);
    insert_edge(g, 2, 6);
    printf("DFS\n");
    dfs_mat(g, 0); //함수 수행
    printf("\n");
    free(g);
    return 0;
}