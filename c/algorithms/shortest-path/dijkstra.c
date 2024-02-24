/*
Dijkstra's algorithm is used to find the single source shortest path.

It works for graphs with positive edge weight only.

We start from a node (called source ndoe) and then
take the smallest edge (greedy approach) to one of its neighbours.

We maintain two sets one of traversed nodes and other of untraversed nodes.

We expand the graph by adding another edge which is connected to one
of the vertices in the travered set. This edge connects another edge
to the traversed set. In this way we explore all the vertices and the
final result is a path from the source S to all other vertices.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define INF 1000
#define SIZE 9

int extractMin(const bool traversed[SIZE], int graph[SIZE][SIZE], int size)
{
    /*
    This function will go through the array of traversed nodes.
    It will find the next node which is at a minimum distance from
    any of the traversed node. Then it will return the node's index
    in the adjacency matrix.
    */

    int minDist = INT_MAX, index;
    for (int i = 0; i < size; i++)
    {
        if (traversed[i])
        {
            for (int j = 0; j < size; j++)
            {
                if (j != i && !traversed[j] && minDist > graph[i][j])
                {
                    minDist = graph[i][j];
                    index = j;
                }
            }
        }
    }
    return index;
}

int main()
{

    int graph[SIZE][SIZE] = {{0, 4, INF, INF, INF, INF, INF, 8, INF},
                             {4, 0, 8, INF, INF, INF, INF, 11, INF},
                             {INF, 8, 0, 7, INF, 4, INF, INF, 2},
                             {INF, INF, 7, 0, 9, 14, INF, INF, INF},
                             {INF, INF, INF, 9, 0, 10, INF, INF, INF},
                             {INF, INF, 4, 14, 10, 0, 2, INF, INF},
                             {INF, INF, INF, INF, INF, 2, 0, 1, 6},
                             {8, 11, INF, INF, INF, INF, 1, 0, 7},
                             {INF, INF, 2, INF, INF, INF, 6, 7, 0}};

    int finalDistance[SIZE] = {0, INF, INF, INF, INF, INF, INF, INF, INF};
    bool traversed[SIZE] = {true, false, false, false, false, false, false, false, false};

    for (int i = 0; i < SIZE - 1; i++)
    {
        /*
        In this loop we will call the extractMin() function
        which will return the index of the next node to add to
        traversed array. We will figure out all the new path going
        through this nodes which are shorter than the previous ones.
        */
        int k = extractMin(traversed, graph, SIZE);
        traversed[k] = true;
        for (int j = 0; j < SIZE; j++)
        {
            /*
            This distanceToK is calculated because I was getting error because
            initially the finalDistance to the exact neighbours of the root node
            is not available so the program take those values from the adjacency
            matrix.
            */
            int distanceToK = graph[0][k] < finalDistance[k] ? graph[0][k] : finalDistance[k];
            int newDistance = distanceToK + graph[k][j];
            if (finalDistance[j] > newDistance)
            {
                finalDistance[j] = newDistance;
            }
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("Shortest distance from node 0 to %d is %d\n", i, finalDistance[i]);
    }

    return 0;
}

/*

References:

Example from: https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/



*/