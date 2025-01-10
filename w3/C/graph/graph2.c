#include <stdio.h>
#include <stdlib.h>

/*
2. Write a C program that implements a function to add a new vertex to an existing graph.
Enter the number of vertices: 4
Enter the number of edges: 3
Enter edge 1 (start end): 0 1
Enter edge 2 (start end): 1 2
Enter edge 3 (start end): 2 3
Original Graph:
Adjacency Matrix:
0 1 0 0
1 0 1 0
0 1 0 1
0 0 1 0
New vertex added successfully.
Graph after adding a new vertex:
Adjacency Matrix:
0 1 0 0 0
1 0 1 0 0
0 1 0 1 0
0 0 1 0 0
0 0 0 0 0
*/

#define MAX_VERTS 10

void addVerts(int graph[MAX_VERTS][MAX_VERTS], int edge1, int edge2) {
    graph[edge1][edge2] = 1;
    graph[edge2][edge1] = 1;

}

int main(void) {

    int vertices = 0;
    int edges = 0;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    int edge1 = 0;
    int edge2 = 0;
    int graph[MAX_VERTS][MAX_VERTS] = {0};
    for(int i = 0; i < edges; i++) {
        printf("Enter edge %d (start end): ", i);
        scanf("%d %d", &edge1, &edge2);
        addVerts(graph, edge1, edge2);
    }

    printf("Original Graph:\n");
    printf("Adjacency Matrix:\n");

    for(int i = 0; i < vertices; i++) {
        printf("\n");
        for(int j = 0; j < vertices; j++) {
            printf("%d ", graph[i][j]);
        }
    }
    printf("\n");

    printf("New vertex added successfully.\n");
    printf("Graph after adding a new vertex:\n");
    printf("Adjacency Matrix:\n");
    for(int i = 0; i < vertices + 1; i++) {
            printf("\n");
            for(int j = 0; j < vertices; j++) {
                printf("%d ", graph[i][j]);
            }
        }
    printf("\n");

    


    return 0;
}