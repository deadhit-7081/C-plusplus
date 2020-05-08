#include <iostream>
using namespace std;
#include<time.h>
#include<math.h>

int main()
{
    int v;
    cout<<"Enter n.o of vertices :";
    cin>>v;

    bool** graph;

    srand(time(0));
    graph = new bool* [v];

    //defining a vertices
    for(int i=0;i<v;i++)
    {
        graph[i] = new bool[v];
    }

    //defining edges
    //density is the prob of having an edge

    for(int i = 0;i<v ;i++)
    {
        for(int j=i;j<v;j++)
        {
            if(i == j)
            {
                graph[i][j] = false;
            }
            else
            {
                graph[i][j] = graph[j][i] = true;
            }
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
    return 0;
}