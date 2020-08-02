// BFS Algorithm 

#include<iostream>
#include<queue>
using namespace std;
void printBFS(int **edges, int n, int sv, bool* visited)
{
    queue<int> BFS;
    BFS.push(sv);
    visited[sv]= true;
    while(!BFS.empty())
    {
        int front=BFS.front();
        BFS.pop();
        cout<<front<<" ";
        for(int i=0;i<n;i++)
        {
            if(front==i)
            {
                continue;
            }
            if(edges[front][i] && !visited[i])
            {
                BFS.push(i);
                visited[i]=true;
            }
        }
    }
}
void BFS(int **edges, int n)
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
            printBFS(edges,n,i,visited);
        }
    }
    
    delete[] visited;
}
int main()
{
    int V,E;
    cin>>V>>E;
    
    int **edges = new int*[V];
    for(int i=0;i<V;i++)
    {
        edges[i]= new int[V];
        for(int j=0;j<V;j++)
        {
            edges[i][j]=0;
        }
    }
    
    for(int i=0;i<E;i++)
    {
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    
    BFS(edges,V);
    
    for(int i=0;i<V;i++)
    {
        delete[] edges[i];
    }
    
    delete[] edges;
    
}