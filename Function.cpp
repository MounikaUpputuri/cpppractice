#include <iostream>
using namespace std;
//function prototypes.
double calc_area_circle(double radius);
double calc_area_cylinder(double radius, double height);
void area_circle();
void area_cylinder();

const double pi{3.14};

int main()
{
    area_circle();
    area_cylinder();
    return 0;
}

double calc_area_circle(double radius)
{
    return pi*radius*radius;
}
double calc_area_cylinder(double radius, double height){
    return pi*radius*radius*height;
}
void area_circle()
{
double radius{};
cout<<"enter area of circle"<<endl;
cin>>radius;
cout<<"the area of circle is "<<radius<<" is"<<calc_area_circle(radius)<<endl;

}
void area_cylinder()
{
    double height{};
    double radius{};
    cout<<"enter height"<<endl;
    cin>>height;
    cout<<"enter radius"<<endl;
    cin>>radius;
    cout<<"the area of cylinder is :"<<calc_area_cylinder(radius,height)<<endl;

}
