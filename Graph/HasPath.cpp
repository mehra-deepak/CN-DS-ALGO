//  To find if the path exits between two given vertices using DFS

#include<iostream>
using namespace std;
bool DFS(int **edges, int n, int sv, int ev, bool* visited)
{
    visited[sv]=true;
    
    //  If starting and ending vertix are same then return true because single vertex.
    if(sv==ev)
    {
        return true;
    }
    
    // Otherwise check for corresponding vertices and recursively call on each of them.
    for(int i=0;i<n;i++)
    {
        if(sv==i)
        {
            continue;
        }
        if(edges[sv][i]==1 && !visited[i])
        {
            bool smallans= DFS(edges,n,i,ev,visited);
            if(smallans)
            {
                return true;
            }
        }
        
    }
    return false;
}
int main()
{
    int V,E;
    cin>>V>>E;
    
    int **edges= new int*[V];
    
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
    
    int sv, ev;
    cin>>sv>>ev;
    
    bool* visited= new bool[V];
    
    for(int i=0;i<V;i++)
    {
        visited[i]=0;
    }
    
    bool result = DFS(edges, V,sv,ev,visited);
    if(result)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
}
