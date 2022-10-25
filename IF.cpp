#include <iostream>
using namespace std;
int main()
{
    int num{};
    int num_max{100};
    int num_min{10};
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(num<=num_max)
    {
        cout<<"The entered number is in between min and max"<<endl;
        int diff(num-num_max);
        cout<<"the difference between both the number is : "<<diff<<endl;
    }
    if(num>num_min)
    {
        cout<<"The entered number is not between min and max"<<endl;
        int diff(num-num_min);
        cout<<"the difference between both the number is : "<<diff<<endl;
    }
    if(num>num_min&&num<num_max)
    {
        cout<<num<<" is in range"<<endl;
        cout<<"both statements should display"<<endl;
    }
    if(num==num_min||num==num_max)
    {
        cout<<"right on boundary"<<endl;
        cout<<"all four statements should display"<<endl;
    }

}