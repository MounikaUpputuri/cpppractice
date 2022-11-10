#include <iostream>
#include <string>
#include <vector>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void display(vector<string> *v){
    for(auto str:*v)
    cout<<str<<" ";
        cout<<endl;
    (*v).at(0)="funny";
}
int main()
{
    int x{100},y{200};
    cout<<x<<endl;
    cout<<y<<endl;
    swap(&x,&y);
    cout<<x<<endl;
    cout<<y<<endl;
    vector<string> stooges{"Hi","Hello","Bye"};
    display(&stooges);
}