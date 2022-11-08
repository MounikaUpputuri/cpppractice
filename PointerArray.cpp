#include <iostream>
using namespace std;

int main()
{
    int scores[]{10,20,30};
    cout<<scores<<endl;
    int *score_ptr{scores};
    cout<<score_ptr<<endl;
    cout<<"value of score ptr is : "<<*score_ptr<<endl;
    cout<<"array subscript notation"<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;
    cout<<"array pointer subscript notation"<<endl;
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;
    cout<<"pointer offset notation"<<endl;
    cout<<*score_ptr<<endl;
    cout<<*(score_ptr+1)<<endl;
    cout<<*(score_ptr+2)<<endl;
    cout<<"array offset notation"<<endl;
    cout<<*scores<<endl;
    cout<<*(scores+1)<<endl;
    cout<<*(scores+2)<<endl;
}