#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string s0{};
    string s1{"apple"};
    string s2{"banana"};
    string s3{"kiwi"};
    string s4{"Apple"};
    string s5{s1};
    string s6{s1,0,3};
    string s7(10,'x');
    cout<<"initialization-----------------------"<<endl;
    cout<<"s1 is initialized to "<<s1<<endl;
    cout<<"s1 is initialized to "<<s2<<endl;
    cout<<"s1 is initialized to "<<s3<<endl;
    cout<<"s1 is initialized to "<<s4<<endl;
    cout<<"s1 is initialized to "<<s5<<endl;
    cout<<"s1 is initialized to "<<s6<<endl;
    cout<<"s1 is initialized to "<<s7<<endl;
cout<<"comparision------------"<<endl;
    cout<<boolalpha;
    cout<<s1<<"=="<<s2<<(s1==s2)<<endl;
    cout<<s1<<"!="<<s2<<(s1!=s2)<<endl;
    cout<<s1<<"<"<<s2<<(s1<s2)<<endl;
    cout<<s1<<">"<<s2<<(s1>s2)<<endl;
cout<<"assignment---------"<<endl;
s1="watermelon";
cout<<s1<<endl;
s1=s2;
cout<<s1<<endl;
cout<<s2<<endl;

cout<<"for loop--------------------"<<endl;
for(size_t i{0};i<s1.length();i++)
cout<<s1.at(i);
cout<<endl;

for(char c:s1)
cout<<c<<endl;

cout<<"substring----------------"<<endl;
s1="this is test";
cout<<s1.substr(0,4)<<endl;
cout<<s1.substr(5,2)<<endl;
cout<<s1.substr(10,4)<<endl;

cout<<"erase-------------"<<endl;
s1="this is a test";
s1.erase(0,2);
cout<<s1<<endl;

cout<<"getline method-----------------"<<endl;
string full_name{};
cout<<full_name;
getline(cin, full_name);
cout<<"your full name is "<<full_name<<endl;









}