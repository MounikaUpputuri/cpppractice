#include <iostream>
using namespace std;
int main()
{
    int scores[]{100,90,80,70,60};
    int *scores_ptr{scores};
    cout<<scores<<endl;
    while(*scores_ptr!=60)
    {
        cout<<*scores_ptr<<endl;
        scores_ptr++;
    }
}