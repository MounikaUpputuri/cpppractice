#include <iostream>
#include <vector>
using namespace std;
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num){
    num=1000;
}
void pass_by_value2(string s){
    s="Hello";
}
void pass_by_value3(vector<string> v){
    v.clear();
}
void print_vector(vector<string> v){
for(auto s:v)
cout<<s<<endl;
}
int main()
{
    int actual{20};
    cout<<actual<<" is the value before calling the function"<<endl;
    pass_by_value1(actual);
    cout<<actual<<" is the value after calling the function"<<endl;
    string name{"mounika"};
    cout<<name<<" before calling the function"<<endl;
    pass_by_value2(name);
    cout<<name<<" after calling the function"<<endl;
    vector<string> v{"hi","hello","bye"};
    print_vector(v);
    cout<<"before calling funtcion "<<endl;
    pass_by_value3(v);
    print_vector(v);
    cout<<"after calling the function"<<endl;



}