#include<iostream>
#include<vector>
using namespace std;
bool DFS(int **edges, int n, int sv, int ev, bool *visited, vector<int> &vec)
{
    
    visited[sv]=true;
    if(sv==ev)
    {
        vec.push_back(sv);
        return true;
    }
    
    for(int i=0;i<n;i++)
    {
        if(edges[sv][i]==1 && !visited[i])
        {
            bool ans=DFS(edges,n,i,ev,visited,vec);
            if(ans)
            {
                vec.push_back(sv);
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
    
    int sv,ev;
    cin>>sv>>ev;
    
    bool *visited = new bool[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=0;
    }
    
    vector<int> vec;
    
    bool answer = DFS(edges,V,sv,ev,visited,vec);
    if(answer)
    {
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i];
        }
    }
    else
    {
        cout<<"No Path";
    }
}

