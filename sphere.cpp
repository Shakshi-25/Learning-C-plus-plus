#include<iostream>
using namespace std;
int main()
{
    int r;
    float volume, surface_area;
    cout<<"Enter the radius of the sphere: ";
    cin>>r;
    volume=(4.0/3.0)*3.14*r*r*r;
    surface_area=4*3.14*r*r;
    cout<<"Volume: "<<volume<<endl;
    cout<<"Surface Area: "<<surface_area<<endl;
    return 0;
}