#include <iostream>
using namespace std;
int main()
{
    int score{};
    char letter_grade{};
    cout<<"enter the score"<<endl;
    cin>>score;
    if(score>=0&&score<=100)
    {
        if(score>90)
        letter_grade='A';
        else if(score>80)
        letter_grade='B';
        else if(score>70)
        letter_grade='C';
        else
        letter_grade='D';
    cout<<"your grade is : "<<letter_grade<<endl;
    if(letter_grade=='D')
    {
        cout<<"You must repeat the class"<<endl;
    }
    else{
        cout<<"congrats!"<<endl;
    }
        
   } else{
        cout<<"student has to appear in next class"<<endl;

    }
    }
