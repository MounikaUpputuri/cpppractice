#include <iostream>
using namespace std;
int main()
{
    int num{};
    cout<<"enter the number"<<endl;
    cin>>num;
    if(num%2==0)
    {
        cout<<"num is even:"<<num<<endl;
    }
    else
    {
        cout<<"not an even number"<<endl;
    }
    cout<<num<<" is: "<<((num%2==0)?"even":"odd")<<endl;
    int num1{},num2{};
    cout<<"enter the number"<<endl;
    cin>>num1>>num2;
    if(num1!=num2)
    {
        cout<<"largest number:"<<((num1>num2)?num1:num2)<<endl;
        cout<<"smallest number:"<<((num1<num2)?num1:num2)<<endl;
    }
    else{
        cout<<"numbers are same"<<endl;
    }
    return 0;
}