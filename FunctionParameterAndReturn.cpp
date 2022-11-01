#include <iostream>
using namespace std;

void param_test(int &number)
{
    cout<<"[number before assiging]:"<<number<<endl;
    number=100;
    cout<<"[number after assigning]:"<<number<<endl;
    cout<<&number<<endl;
}
int main()
{
    int actual_result{50};
    cout<<"[actual_result]:"<<actual_result<<endl;
    param_test(actual_result);
    cout<<"after function call: "<<actual_result<<endl;
    cout<<&actual_result<<endl;

}