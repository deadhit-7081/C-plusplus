#include <iostream>
using namespace std;

class Point
{
private:
    double x,y;
public:

/*The above use of Initializer list is optional as the  
        constructor can also be written as: 
        Point(int i = 0, int j = 0) { 
            x = i; 
            y = j; 
        } 
        OR
        Point(int x, int y) { 
            this->x = x; 
             this->y= y; 
        }
*/
Point(double x=0.0,double y=0.0):x(x),y(y){}//constructor

int getX()
{
    return x;
}
int getY()
{
    return y;
}
};

int main()
{
    Point obj(10,34);
    cout<<"x : "<<obj.getX();
    cout<<" y : "<<obj.getY();
    return 0;
}