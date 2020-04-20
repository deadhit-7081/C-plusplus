#include <iostream>
#include <complex>
using namespace std;

template<class T>
inline void swape(T& a,T& b)
{
    T temp = a;
    a=b;
    b=temp;
}

int main()
{
    int a=5,b=6;
    double x=5.6,y=6.3;
    complex<double> r(2.4,3.5),s(3.4,6.7);//complex is itself a template
    swape(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;
    swape(x,y);
    cout<<"x="<<x<<" y="<<y<<endl;
    swape(r,s);
    cout<<"r="<<r<<" s="<<s<<endl;
    return 0;
}