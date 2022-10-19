#include <iostream>
using namespace std;
int main()
{
    int num1{}, num2{},num3{};
    const int count{3};
    int total{};
    cout<<"Enter the all three numbers"<<endl;
    cin>>num1>>num2>>num3;
    total=num1+num2+num3;
    double average{0.0};
    average=static_cast<double>(total)/count;
    
    cout<<"the total and average of 3 numbers is: "<<average<<endl;
    

}