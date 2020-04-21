//* Convert this program to C++

//*change to C++ io

//*change to one line comments

//* change defines of constants to const

//* change array to vector<>

//* inline any short function
#include <iostream>  
#include <vector>  
#include <numeric>      
using namespace std; 

const int n = 40;
inline int Sum(vector<int> &v)  
{ 
    int initial_sum  = 0;  
    return accumulate(v.begin(), v.end(), initial_sum); //accumulator returns the sum of the given array
} 
   
int main()  
{ 
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(i);
    } 
    cout <<"Sum is="<<Sum(v); 
    return 0; 
}
