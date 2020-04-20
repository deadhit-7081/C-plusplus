#include <iostream>
using namespace std;

inline void swap(int& i,int& j)//reference if i and j(call by reference i.e value of i & j changes)
{
    int temp = i;
    i=j;
    j=temp;
}

inline void swap(double& i,double& j)//reference if i and j(call by reference i.e value of i & j changes)
{
    double temp = i;
    i=j;
    j=temp;
}

int main()
{
    int a=5,b=6;
    swap(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;
    double x=5.4,y=6.9;
    swap(x,y);
    cout<<"x="<<x<<" y="<<y;
    return 0;
}