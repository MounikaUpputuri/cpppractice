#include <iostream>
#include <climits> //make sure to include for integers same for floats also
using namespace std;

int main()
{
    cout<<"size of variables"<<endl;
    cout<<sizeof(char)<<" is size of char"<<endl;
    cout<<sizeof(int)<<" is size of integer "<<endl;
    cout<<sizeof(double)<<" is size of double"<<endl;
    cout<<sizeof(long double)<<" is size of long double"<<endl;
    cout<<sizeof(short)<<" is size of short"<<endl;
    cout<<sizeof(long long)<<" is size of long long "<<endl;
    cout<<"---------------------------"<<endl;

    //size of float
    cout<<sizeof(float)<<" is size of float"<<endl;

    //use values defined in <climits>
    cout<<"minimum values"<<endl;
    cout<<INT_MIN<<endl;
    cout<<INT_MAX<<endl;
    cout<<LLONG_MIN<<endl;
    cout<<LLONG_MAX<<endl;
    cout<<SHRT_MIN<<endl;
    cout<<SHRT_MAX<<endl;
    cout<<CHAR_MIN<<endl;
    cout<<CHAR_MAX<<endl;

   //size of can also used in the variables
    int age=21;
    cout<<sizeof(age)<<endl;
    cout<<sizeof age <<endl;   

    double area{34.23};
    cout<<sizeof area<<endl;
    cout<<sizeof(area)<<endl;

    char Hi{'f'};
    cout<<sizeof(Hi)<<endl;   

}
