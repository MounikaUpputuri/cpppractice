#include <iostream>
using namespace std;
int main()
{
    const double usd_eur{1.19};
    cout<<"welcome to the conversion "<<endl;
    cout<<"enter value of eur:"<<endl;
    double euro{0.0};
    double dollar{0.0};
    cin>>euro;
    dollar=euro*usd_eur;
    cout<<"after converting euros to dollar"<<euro<<" is equal to "<<dollar<<endl;



}