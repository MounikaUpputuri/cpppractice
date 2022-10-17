#include <iostream>
using namespace std;
int main(){

    char middle_name{'M'};
    cout<<middle_name<<endl;
    unsigned  int age{23};
    cout<<"my age is "<<age<<endl;
    int country{45};
    cout<<"number of countries represented is "<<country<<endl;
    long people_world{123456};
    cout<<"people around the world is "<<people_world<<endl;
    long long people_sweden{2323323232323};
    cout<<"people in sweden is "<<people_sweden<<endl;

    //floating type
    float car_price{12.34};
    cout<<"car paymnet is "<<car_price<<endl;
    double car_rent{2345.123};
    cout<<"car rent is "<<car_rent<<endl;
    long double car_oil{23.9876543};
    cout<<"car oil is"<<car_oil<<endl;


    //boolean type
    bool game_over{false};
    cout<<"game over "<<game_over<<endl;

    //overflow example
    short value1{30000};
    short value2{1000};
    long total{value1*value2};
    cout<<"total value is "<<total<<endl;



}