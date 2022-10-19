#include <iostream>
using namespace std;
int main()
{
    int value1{10};
    int value2{20};

     value1=value2; 
     value1=value2=1000;
     
     cout<<"value1 is :"<<value1<<endl;
     cout<<"value2 is :"<<value2<<endl;

     int num1{100};
     int num2{200};
     //cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
     int result{0};
     result=num1+num2;
     cout<<num1<<"+"<<num2<<"="<<result<<endl;
     result=num2-num1;
     cout<<num2<<"-"<<num1<<"="<<result<<endl;
     result=num1*num2;
     cout<<num1<<"*"<<num2<<"="<<result<<endl;
     result=num2%num1;
     cout<<num1<<"/"<<num2<<"="<<result<<endl;
     return 0;

}