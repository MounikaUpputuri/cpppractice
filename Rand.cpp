#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int rand_num{};
    size_t count{10};
    int min{1};
    int max{5};
    cout<<"rand numbers are:"<<RAND_MAX<<endl;
    srand(time(nullptr));
    for(size_t i{1};i<=count;i++){
    rand_num=rand()%max+min;
    cout<<rand_num<<endl;
    }
    cout<<endl;

}
    