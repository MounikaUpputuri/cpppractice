#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num1{};
    int num2{};

    for( int num1{2};num1<=2;num1++){
        for(int num2{1};num2<=10;num2++){
            cout<<num1<<"*"<<num2<<"="<<(num1*num2)<<endl;
        }
        cout<<"----------"<<endl;
    }
    for( int num1{1};num1<=10;num1++){
        for(int num2{1};num2<=10;num2++){
            cout<<num1<<"*"<<num2<<"="<<(num1*num2)<<endl;
        }
        cout<<"----------"<<endl;
    }

    int num_items{};

    cout<<"enter no of data items";
    cin>>num_items;
    vector<int> data{};
    for(int i{1};i<=num_items;i++)
{
        int data_items{};
        cout<<"enter the no of items "<<i<<":";
        cin>>data_items;
        data.push_back(data_items);
    }
        for(auto val:data){
            for(int i{1};i<=val;i++)
            {
                if(i%5==0)
                cout<<"Hi";
                cout<<"-";
            }
        
            cout<<val<<endl;
        }

}