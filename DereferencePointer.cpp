#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int score{100};
    int *score_ptr{&score};
    cout<<*score_ptr<<endl;
    *score_ptr=200;
    cout<<*score_ptr<<endl;
    cout<<score<<endl;

    double high_temp{100.4};
    double low_temp{34.5};
    double *temp_ptr{&high_temp};
    cout<<*temp_ptr<<endl;
    temp_ptr=&low_temp;
    cout<<*temp_ptr<<endl;

    string name{"frank"};
    string *str_ptr{&name};
    cout<<*str_ptr<<endl;
    name="Mounika";
    cout<<*str_ptr<<endl;

    vector<string> stooges{"hi","hello","bye"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr=&stooges;
    cout<<(*vector_ptr).at(0)<<endl;
    for(auto stooge:*vector_ptr)
    cout<<stooge<<endl;


}