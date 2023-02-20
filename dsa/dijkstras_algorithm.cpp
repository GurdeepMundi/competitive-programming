#include <iostream>
#include <vector>
#define V 6
using namespace std;

// Function to find the minimum vertex
int selectMinVertex(vector<int>& value, vector<bool>& processed)
{
    int minimum = INT_MAX;
    int vertex;
    for(int i=0; i<V; i++)
    {
        if (processed[i] == false && value[i] < minimum)
        {
            vertex = i;
            minimum = value[i];
        }
    }
    return vertex;
}

void dijkstra(int graph[V][V])
{
    vector<bool> processed(V, false); // processed
    vector<int> values(V, INT_MAX);   // values
    int parent[V];                    // parent
    parent[0] = -1;                   // no parent for the starting node
    values[0] = 0;                    // start has no value.

    for (int i = 0; i < V - 1; i++)
    {
        int U = selectMinVertex(values, processed);
        processed[U] = true; // include U in the shortest path graph

        // relax adjacent vertices not included in the current path
        for (int j = 0; j < V; j++)
        {
            /* 3 conditions to relax
             * Edge is present from U to J
             * Edge is not included in the shortest path graph
             * Cost [U] + Cost [uv] < cost [v]
             */
            if(graph[U][j] != 0 &&
                !processed[j] &&
                values[U] + graph[U][j] < values[j] &&
                values[U] != INT_MAX
            )
            {
                values[j] = graph[U][j] + values[U];
                parent[j] = U;
            }
        }
    }
    // Print shortest path graph
    for(int i=0;i<V;i++)
    {
        cout<<"U->V: "<<parent[i]<<"->"<<i<<" wt = "<<graph[parent[i]][i]<<"\n";
    }
}

int main()
{
    int graph[6][6] = {{0,2,2,3,100,5},
    {0,0,0,2,1,7},
    {1,1,1,1,5,0},
    {0,0,0,0,0,4},
    {0,0,0,0,0,2},
    {0,0,0,0,1,3},};
    dijkstra(graph);

    return 0;
}