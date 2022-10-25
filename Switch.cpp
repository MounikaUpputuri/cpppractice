#include <iostream>
using namespace std;
int main()
{
    char letter{};
    cout<<"enter the character"<<endl;
    cin>>letter;
    switch(letter)
    {
        case 'A':
        case 'a':
        cout<<"you to study hard"<<endl;
        break;
        case 'b':
        case 'B':
        cout<<"you need 80-89 for B"<<endl;
        break;
        case 'C':
        case 'c':
        cout<<"you need 70-79 for C"<<endl;
        break;
        case 'D':
        case 'd':
        {
            char confirm{};
            cout<<"are you sure?"<<endl;
            cin>>confirm;
            if(confirm=='y'||confirm=='Y')
            {
                cout<<"ok , i guess you did study well"<<endl;
            }
            else if(confirm=='n'||confirm=='N')
            {
                cout<<"u didnt study well"<<endl;
            }
            else
            cout<<"illegal choice"<<endl;
            break;
        }
        default:
        cout<<"not a valid grade"<<endl;
    }
}