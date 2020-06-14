#include<iostream>
using namespace std;

class Cube{
    public:
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

    private:
    double length_;
};

double Cube::getVolume(){
    return length_*length_*length_;
}

double Cube::getSurfaceArea()
{
    return 6*length_*length_;
}

void Cube::setLength(double length)
{
    length_=length;
}

int main()
{
    Cube c;
    c.setLength(4);
    double volume = c.getVolume();
    cout<< "Volume " <<volume<<endl;
    return 0;
}