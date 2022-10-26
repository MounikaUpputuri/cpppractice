#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int score[]{10,20,30,40,50};
    for(int scores:score)
    cout<<scores<<endl;
    vector<double> temps{10.0,20.3,30.4};
    double average_temp{};
    double total{};
    for(double temp:temps)
    total+=temp;
    if(temps.size()!=0)
    average_temp=total/temps.size();
    cout<<"average temps is :"<<average_temp<<endl;
    for(auto val: {1,2,3,4,5})
    cout<<val<<endl;
    for(auto c:"Mounika")
    if(c!=' ')
    cout<<c;
    cout<<endl;

    for(auto C:"this is my name")
    if(C==' ')
    cout<<"\t";
    else
    cout<<C;
    cout<<endl;


    
}
