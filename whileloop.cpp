#include <iostream>
using namespace std;
int main()
{
    int num{};
    cout<<"enter the number"<<endl;
    cin>>num;
    while(num>0)
    {
        cout<<num<<endl;
        num--;
    }
    cout<<"blast off"<<endl;

    int num1{};
    cout<<"enter a positive integer count  up to"<<endl;
    cin>>num1;
    int i{1};
    while(num1>=i)
    {
        cout<<i<<endl;
        i++;
    }
    int num2{};
    cout<<"enter the number lessthan 100"<<endl;
    cin>>num2;
    while(num2>=100){
        cout<<"enter the number lessthan 100"<<endl;
        cin>>num2;
    }
    cout<<"thanks!"<<endl;








return 0;
}