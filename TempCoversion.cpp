#include <iostream>
#include <cmath>
using namespace std;
//function prototypes
double fahrenheit_to_celsius(double temp);
double fahrenheit_to_kelvin(double temp);
//function definitions
double fahrenheit_to_celsius(double temp){
    return round((5.0/9.0)*(temp - 32));
}
double fahrenheit_to_kelvin(double temp){
    return round((5.0/9.0)*(temp - 32) + 273);
}
//function
void temp_connversion(double farenhit_temp)
{
    double celsius_temp=fahrenheit_to_celsius(farenhit_temp);
    double kelvin_temp=fahrenheit_to_kelvin(farenhit_temp);
    cout<<celsius_temp<<endl;
    cout<<kelvin_temp<<endl;
    
}

int main()
{
    double temp{34.5};
    cout<<temp<<endl;
    temp_connversion(temp);
    
    
    
}