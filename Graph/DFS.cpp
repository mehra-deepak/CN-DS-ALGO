// DFS Algorithm Graph

#include<iostream>
using namespace std;

void printDFS(int **edges, int n, int sv, bool* visited)
{
    cout<<sv;
    visited[sv]=1;
    
    for(int i=0;i<n;i++)
    {
        if(sv==i)
        {
            continue;
        }
        if(edges[sv][i]==1 && !visited[i])
        {
            printDFS(edges,n,i,visited);
        }
    }
}

// Checkpoint 5: Keeping in mind that there can be Disconnected Graph and so each component has to be called like this
void DFS(int **edges, int n)
{
    bool *visited= new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            printDFS(edges,n,i,visited);
        }
    }
}

int main()
{
    // Checkpoint 1: Take Vertices and Edges as input.
    int V, E;
    cin>>V>>E;
    
    
    // Checkpoint 2: Make a 2D array (refer technodelight for 2d array) which will act as adjiciency matrix, and initialise the matrix with 0's
    int **edges = new int*[V];
    
    for(int i=0;i<V;i++)
    {
        edges[i] = new int[V];
        for(int j=0;j<V;j++)
        {
            edges[i][j]=0;
        }
    }
    
    
    // Checkpoint 3: Take input edges and put the values in adjacency matrix 
    for(int i=0;i<E;i++)
    {
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    
    
    // Checkpoint 4: Call DFS function
    DFS(edges,V);
    
}