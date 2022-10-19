#include <iostream>
using namespace std;
int main()
{
    //pre increment
    //int counter=10;
    //int result=0;
    //cout<<"counter value is: "<<counter<<endl;
    //result=++counter;
    //cout<<"counter value is : "<<counter<<endl;
    //cout<<"result value is :"<<result<<endl;

    //post increment
    int counter{10};
    int result{0};
    cout<<"counter value is: "<<counter<<endl;
    result=counter++;
    cout<<"counter value is : "<<counter<<endl;
    cout<<"result value is :"<<result<<endl;



}