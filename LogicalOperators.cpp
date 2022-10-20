#include <iostream>
using namespace std;
int main()
{
    const int lower{10};
    const int upper{20};
    int num{};
    cout<<boolalpha;
    cout<<"enter the numbers that are "<<lower<< " and "<<upper<<endl;
    cin>>num;
    bool within_bounds{false};
    //within_bounds=(num>lower&&num<upper);
    //cout<<num<<" is with in the boundary"<< lower <<" between "<<upper <<":"<<within_bounds<<endl;
    //within_bounds=(num>lower||num<upper);
    //cout<<num<<" is with in the boundary"<< lower <<" between "<<upper <<":"<<within_bounds<<endl;


}