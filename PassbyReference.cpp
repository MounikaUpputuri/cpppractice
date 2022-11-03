#include <iostream>
#include <string>
#include <vector>
using namespace std;
void pass_by_ref(int &num);
void pass_by_ref2(string &s);
void pass_by_ref2(vector<string> &v);
void pass_by_ref(int &num){
    num=2000;
    cout<<num<<endl;
}
void pass_by_ref2(string &s){
    s="changed";
    cout<<s<<endl;
}
void print_ref(vector<string> &v){
    
    v[0]="heyy";
    for(auto i:v)
    
    cout<<i<<" ";
    cout<<endl;
}
void pass_by_ref3(vector<string> &v){
    v.clear();
    
}
int main(){
    int num{20};
    cout<<num<<endl;
    pass_by_ref(num);
    string name{"Mounika"};
    cout<<name<<endl;
    pass_by_ref2(name);
    vector<string> stooges{"mounika","how","are","you"};
    print_ref(stooges);
    pass_by_ref3(stooges);
    print_ref(stooges);
    return 0;


    
}



