#include <iostream>
#include <string>
using namespace std;
string print_guest_list(const string array[], size_t size);
void clear_guest_list(string array[],size_t size);
string print_guest_list(const string array[], size_t size){
    for( size_t i{0};i<size;i++)
    cout<<array[i]<<" ";
    return typeid(array).name();
}
void clear_guest_list(string array[],size_t size){
    for( size_t i{0};i<size;i++)
    array[i].clear();
}
int main()
{
    string array[]{"Hi","Hello"};
    print_guest_list(array,2);
    clear_guest_list(array,2);
    print_guest_list(array,2);

}