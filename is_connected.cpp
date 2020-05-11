#include<iostream>
using namespace std;

    void isconnected(int* graph[],int v)
    {
        int c_size = 0,old_size=0;
        int* open = new int[v];
        int* close = new int[v];
        for(int i=0;i<v;i++)
        {
            open[i] = close[i] = 0;
        }
        open[0] = 1;
        while(c_size<v)
        {
            for(int i=0;i<v;i++)
            {
                old_size=c_size;
                if(open[i] && (close[i] == 0))
                {
                    close[i] = 1;
                    c_size++;
                }
                for(int j=0;j<v;j++)
                {
                    open[j] = open[j] || graph[i][j];
                }
            }
        }
        if(c_size == v && old_size != c_size)
        {
            cout<<"Graph Connected";
        }
        if(old_size == c_size)
        {
            cout<<"Not Connected";
        }
        
    }

int main()
{
    int v;
    cout<<"Enter Size of Graph :";
    cin>>v;
    int** graph;
    graph = new int* [v];

    for(int i=0;i<v;i++)
    {
        graph[i] = new int[v];
    }
    cout<<"Enter value :";
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<"Enter the value in "<<i<<","<<j<<" ";
            cin>>graph[i][j];            
        }
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    isconnected(graph,v);
    return 0;
}