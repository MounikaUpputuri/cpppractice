#include <iostream>
using namespace std;
int main()
{
    
    char vowels[] {'a','e','i','o','u'};
    cout<<"characters in the array is:"<<vowels[0]<<endl;
    cout<<"last character in the array is :"<<vowels[4]<<endl;
    //cin>>vowels[5]; //array outbound exception

    double high_temp[]{23.2,24.3,34.5,45.6,12.4};
    cout<<"the temp are as below:"<<high_temp[0]<<endl;
    cout<<"the temp at last index is:"<<high_temp[3]<<endl;
    high_temp[0]=10.23;
    cout<<"the latest temp value at 0 index is :"<<high_temp[0]<<endl;

    int score_card[5]{10,20,30,40,50};
    cout<<"first score at o is:"<<score_card[0]<<endl;
    cout<<"scond score at 1 is :"<<score_card[1]<<endl;
    cout<<"thrid score at 3 is:"<<score_card[2]<<endl;
    cout<<"fourth score at 4 is:"<<score_card[3]<<endl;
    cout<<"fifth score at 5 is:"<<score_card[4]<<endl;

    cin>>score_card[0];
    cin>>score_card[1];
    cin>>score_card[2];
    cin>>score_card[3];
    cin>>score_card[4];

    cout<<"first score at o is:"<<score_card[0]<<endl;
    cout<<"scond score at 1 is :"<<score_card[1]<<endl;
    cout<<"thrid score at 3 is:"<<score_card[2]<<endl;
    cout<<"fourth score at 4 is:"<<score_card[3]<<endl;
    cout<<"fifth score at 5 is:"<<score_card[4]<<endl;

    cout<<"name of the array is :"<<score_card<<endl;//mempry address(name of the array is memory of the array)




}