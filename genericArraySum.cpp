#include <iostream>
using namespace std;

template <class T>
T sum(const T data[],int size,T s=0)
{
    for(int i=0;i<size;i++)
    {
        s+=data[i];
    }
    return s;
}

int main()
{
    
    int arr[] = {1,2,3,4,5};
    double arr1[] = {1.1,1.2,1.3,1.4};
    cout<<sum(arr,5)<<endl;
    cout<<sum(arr,4);
    return 0;
}