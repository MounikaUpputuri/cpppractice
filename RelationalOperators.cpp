#include <iostream>
using namespace std;
int main()
{
    int num1{},num2{};
    std::cout<<boolalpha;
    cout<<"enter two numbers"<<endl;
    cin>>num1>>num2;
    cout<<num1<<" is"<<" < "<<num2<<" : "<<(num1<num2)<<endl;
    cout<<num1<<" is"<<" > "<<num2<<" : "<<(num1>num2)<<endl;
    cout<<num1<<" is"<<" <= "<<num2<<" : "<<(num1<=num2)<<endl;
    cout<<num1<<" is"<<" >= "<<num2<<" : "<<(num1>=num2)<<endl;

}