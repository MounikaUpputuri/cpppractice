#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
 int main()
 {
    char first_name[20]{};
    char last_name[20]{};
    char address[20]{};
    char full_name[40]{};

    cout<<first_name;
    cin>>first_name;
    cout<<last_name;
    cin>>last_name;
    cout<<"you first name is :"<<first_name<<" "<<strlen(first_name)<<" characters"<<endl;
    cout<<"you last name is :"<<first_name<<" "<<strlen(last_name)<<" characters"<<endl;
    strcpy(full_name, first_name);//copying first name to full name
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout<<full_name<<endl;

    char actual_name[20]{};
    char temp[10]{};
    cout<<actual_name;
    
    cout<<"your actual name is:"<<actual_name<<endl;
    cout<<"--------------------"<<endl;
    strcpy(temp, actual_name);
    if(strcmp(temp,actual_name)==0)
        cout<<temp<<" and "<<actual_name<<" are same"<<endl;
        else
        cout<<temp<< " and "<<actual_name<<" are not same"<<endl;
    cout<<"--------------------------------------"<<endl;

 }
