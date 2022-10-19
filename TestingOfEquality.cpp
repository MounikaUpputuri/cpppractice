#include <iostream>
using namespace std;
int main()
{
    bool result_equal{false};
    bool result_notequal{false};
    int num1{},num2{};
    std::cout<<boolalpha;
    cout<<"enter the 2 numbers"<<endl;
    cin>>num1>>num2;
    result_equal=(num1==num2);
    result_notequal=(num1!=num2);
    cout<<"comparision result for equal is:"<<result_equal<<endl;
    cout<<"comparision result for equal is:"<<result_notequal<<endl;
}