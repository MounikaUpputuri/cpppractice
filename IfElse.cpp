#include <iostream>
using namespace std;
int main()
{
    int num{};
    const int num_min{10};
    const int num_max{100};
    cout<<"enter the number "<<endl;
    cin>>num;
    if(num<num_max)
    {
        cout<<"the entered number is less than : "<<num_min<<endl;
        int diff{num_max-num};
    }
        else
        {
            cout<<"the entred number is greater than the :"<<num_max<<endl;
        }
    }
