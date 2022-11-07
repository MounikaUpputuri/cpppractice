#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num{10};
    cout<<"address of num is :"<<&num<<endl;
    cout<<"size of num is : "<<sizeof num<<endl;
    cout<<"value of num is: "<<num<<endl;

    int *p;
    cout<<"address of num is :"<<&p<<endl;
    cout<<"size of num is : "<<sizeof p<<endl;
    cout<<"value of num is: "<<p<<endl;

    p=nullptr;
    cout<<"value of num is: "<<p<<endl;

    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    string *p4{nullptr};
    vector<string> *p5{nullptr};
    cout<<"size of p1 is :"<<sizeof p1<<endl;
    cout<<"size of p2 is :"<<sizeof p2<<endl;
    cout<<"size of p3 is :"<<sizeof p3<<endl;
    cout<<"size of p4 is :"<<sizeof p4<<endl;
    cout<<"size of p5 is :"<<sizeof p5<<endl;

    int score{10};
    double temp{100.3};
    int *score_ptr{nullptr};

    score_ptr=&score;
    cout<<"value of score is :"<<score<<endl;
    cout<<"value of score _ptr is "<<score_ptr<<endl;
    cout<<"address of score ptr is :"<<&score_ptr<<endl;
    cout<<"address of the score is :"<<&score<<endl;


}