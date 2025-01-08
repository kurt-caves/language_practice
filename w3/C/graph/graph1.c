#include <stdio.h>
#include <stdlib.h>

/*
1. Write a C program to represent a graph using an adjacency matrix.
Enter the number of vertices: 5
Enter the number of edges: 7
Enter edge 1 (start end): 0 1
Enter edge 2 (start end): 0 2
Enter edge 3 (start end): 1 2
Enter edge 4 (start end): 1 3
Enter edge 5 (start end): 2 4
Enter edge 6 (start end): 3 4
Enter edge 7 (start end): 4 0
Adjacency Matrix:
0 1 1 0 1
1 0 1 1 0
1 1 0 0 1
0 1 0 0 1
1 0 1 1 0
*/

# define MAX_VERTS 10


void insertEdges(int graph[MAX_VERTS][MAX_VERTS], int edge1, int edge2) {
    printf("insertEdges\n");
}

int main(void) {

    int vertices = 0;
    int edges = 0;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    int graph[MAX_VERTS][MAX_VERTS] = {0};

    int edge1 = 0;
    int edge2 = 0;

    for(int i = 0; i < edges; i++) {
        printf("Enter edge %d (start end): ", i + 1);
        scanf("%d %d", &edge1, &edge2);
        insertEdges(graph, edge1, edge2);
    }

    

    return 0;
}