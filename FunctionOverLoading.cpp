#include <iostream>
#include <string>
#include <vector>
using namespace std;
void print(int n);
void print(string s);
void print(string u, string t);
void print(vector<string> v);
void print(int n)
{
    cout<<"printing integer: "<<n<<endl;

}
void print(string s){
    cout<<"printing the string: "<<s<<endl;

}
void print(string u, string t){
    cout<<"printing strings: "<<u<<"  "<<t<<endl;
}
void print(vector<string> v){
    cout<<"printing vector of strings"<<endl;
    for(auto n:v)
    cout<<n+" ";
    cout<<endl;
}
int main()
{
    
    print(12);
    print('A');
    print("Mounika");
    print("Mounika", "Upputuri");
    vector<string> stooges{"Mounika","upputuri","Hi"};
    print(stooges);
    cout<<endl;
    return 0;
}