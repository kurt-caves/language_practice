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

int main(void) {

    int vertices = 0;
    int edges = 0;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    int graph[MAX_VERTS][MAX_VERTS] = {0};

    



    return 0;
}