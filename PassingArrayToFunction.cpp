#include <iostream>
using namespace std;
void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size);

void print_array(int arr[], size_t size){
    for(size_t i{0};i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void set_array(int arr[], size_t size, int num){
    for(size_t i{0};i<size;i++)
    arr[i]=num;
}
int main()
{
    int array[]{10,20,30,40,50};
    print_array(array,5);
    set_array(array,5,100);
    print_array(array,5);
}