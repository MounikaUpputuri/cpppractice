#include <iostream>
using namespace std;
int main()
{
    char selection{};
    do{
        cout<<"\n-------------"<<endl;
        cout<<"1.do this"<<endl;
        cout<<"2.do that"<<endl;
        cout<<"3.doing that"<<endl;
        cout<<"Q.quit"<<endl;
        cin>>selection;

        if(selection=='1')
        cout<<"you choose 1. do this"<<endl;
        else if(selection=='2')
        cout<<"you choose 2.do that"<<endl;
        else if(selection=='3')
        cout<<"you choose 3. doing that"<<endl;
        else(selection=='4');
        cout<<"good bye"<<endl;


    }while(selection!='q'&&selection!='Q');
}