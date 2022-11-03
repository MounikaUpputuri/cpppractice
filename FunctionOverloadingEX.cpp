#include <iostream>
#include <cmath>
using namespace std;
int find_area(int);
double find_area(double , double);
int find_area(int side_length){
    return side_length*side_length;
    
}
double find_area(double length , double width){
    return length*width;
}



int main(){
    int calc_cube=find_area(34);
    cout<<"area of cube is :"<<calc_cube<<endl;
    double calc_rectangle=find_area(23.5,23.5);
    cout<<" area of rectangle is :"<<calc_rectangle<<endl;
    
}
