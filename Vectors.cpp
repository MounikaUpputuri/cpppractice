#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <char> test_score(5);
    vector <int> score_card(10);
    vector <char> vowels{'a','e','i','o','u'};
    vector <int> values{10,20,30,40};
    vector <double> high_temp(100.23,234.23);

    cout<<"index at 1 is :"<<values[0]<<endl;
    cout<<"index at 2 is :"<<values[3]<<endl;
    cout<<"index at 3 is :"<<values.at(2)<<endl;
    cout<<"index at 4 is :"<<values.at(1)<<endl;

    values.at(0)=100;//assignment operator
    cout<<"index at 0 is :"<<values[0]<<endl;

    //adding vectors 
    values.push_back(80);
    values.push_back(60);
    cout<<"values added to vector:"<<values.at(5)<<endl;
    cout<<"values added to vector:"<<values.at(4)<<endl;
    //cout<<"values added to vector:"<<values.at(6)<<endl;//m_range_check

    //2Dvector
    vector <vector<int>> movie_rating{
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5}
        };
        cout<<"vector position:"<<movie_rating[1][0]<<endl;
        cout<<"vector position:"<<movie_rating[1][1]<<endl;
        cout<<"vector position:"<<movie_rating[1][2]<<endl;

        vector <int>vector1;
        vector <int> vector2;
        vector1.push_back(10);
        vector1.push_back(20);
        cout<<"vector at respctive positions:"<<vector1[0]<<endl;
        cout<<"vector at respctive positions:"<<vector1[1]<<endl;
        cout<<"vector at respctive positions:"<<vector1.at(0)<<endl;
        cout<<"vector at respctive positions:"<<vector1.at(1)<<endl;
        vector2.push_back(100);
        vector2.push_back(200);
        cout<<"vector at respctive positions:"<<vector2[0]<<endl;
        cout<<"vector at respctive positions:"<<vector2[1]<<endl;
        cout<<"vector at respctive positions:"<<vector2.at(0)<<endl;
        cout<<"vector at respctive positions:"<<vector2.at(1)<<endl;

        vector <vector<int>>  vector2d{};
        
            vector2d.push_back(vector1);
            vector2d.push_back(vector2);
        
        cout<<"elements in 2d vectcor:"<<vector2d[0][0]<<endl;
        cout<<"elements in 2d vectcor:"<<vector2d[0][1]<<endl;
        cout<<"elements in 2d vectcor:"<<vector2d[1][0]<<endl;
        cout<<"elements in 2d vectcor:"<<vector2d[1][1]<<endl;
        vector1.at(0)=1000;
        cout<<"elements in 2d vectcor:"<<vector2d[0][0]<<endl;
        cout<<"elements in 2d vectcor:"<<vector2d[0][1]<<endl;
        cout<<"elements in 2d vectcor:"<<vector2d[1][0]<<endl;
        cout<<"elements in 2d vectcor:"<<vector2d[1][1]<<endl;
        cout<<"vector at respctive positions:"<<vector1[0]<<endl;















    }




