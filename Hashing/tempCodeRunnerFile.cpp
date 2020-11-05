 unordered_map<int, int> umap;

    for(int i=0;i<n;i++)
    {
        if(umap.find(arr[i])==umap.end())
        {
            umap[arr[i]]=1;
        }
        else
        {
            umap[arr[i]]++;
        }
    }


    for(int i=0;i<n;i++)
    {
        int x = arr[i];
        if(x>0)
        {
            int y = (-1)* x;
            if(umap.find(y)!=umap.end())
            {
                cout<<y<<" "<<x<<endl;
            }
        }
        
    }