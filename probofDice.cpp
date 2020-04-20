#include <iostream>
#include <cstdlib>//import std lib from c
#include <ctime>
using namespace std;
const int side = 6;
inline int r_side(){ return (rand()%side+1);}

int main()
{
    const int n_dice = 2;
    int d1,d2;
    srand(clock());//srand() initlizing seeding random n.o genertor i.e rand()
    //clock() returns processor time consumed by the program
    cout<<"\nEnter n.o of trials :";
    int trials;
    cin>>trials;
    int* outcome = new int[n_dice*side+1];//new is used to allocate dynamic memory in heap
    for(int j=0;j<trials;++j)
    {
        outcome[(d1=r_side())+(d2=r_side())]++;
    }
    cout<<"\nProbablity :";
    for(int j=2;j<n_dice*side+1;++j)
    {
        cout<<"j="<<j<<" p= "<<static_cast<double>(outcome[j])/trials<<endl;//static_cast is safe typecasting feature in c++
    }
    return 0;

}