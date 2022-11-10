#include <iostream>
using namespace std;
int main()
{
    int scores[]{100,90,80,70,60};
    int *scores_ptr{scores};
    int *score_ptr{scores};
    cout<<scores<<endl;
    while(*scores_ptr!=60)
    {
        cout<<*scores_ptr<<endl;
        scores_ptr++;
    }
    cout<<"-----------------"<<endl;
    score_ptr=scores;
    while(*score_ptr!=60)
    cout<<*score_ptr++<<endl;
    cout<<"-----------------"<<endl;

    string s1{"frank"};
    string s2{"frank"};
    string s3{"Mounika"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s3};

    cout<<boolalpha;
    cout<<*p1<<"=="<<*p2<<":"<<(*p1==*p2)<<endl;
    cout<<*p1<<"=="<<*p2<<":"<<(*p1==*p3)<<endl;

    char name[]{"Frank"};
    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};
    char_ptr1=&name[0];
    char_ptr2=&name[3];

    cout<<"in the string"<<name<<(char_ptr2-char_ptr1)<<"charcters way from the "<<char_ptr1<<endl;

}