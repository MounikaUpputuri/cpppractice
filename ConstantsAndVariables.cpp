#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello welcome to carpet services"<<endl;
    cout<<"how many rooms would like to cleaned?"<<endl;
    int number_rooms{0};
    cin>>number_rooms;
    cout<<"\nestimate for carpet cleaning service"<<endl;
    cout<<"number of rooms:"<<number_rooms<<endl;
    const  int price_per_room{30};
    cout<<"price for room is :$"<<price_per_room<<endl;
    cout<<"cost:$"<<price_per_room*number_rooms<<endl;
    const double tax{0.06};
    cout<<"tax:$"<<price_per_room*number_rooms*tax<<endl;
    cout<<"Total estimate is :"<<(price_per_room*number_rooms)+(price_per_room*number_rooms*tax)<<endl;
    const int days{30};
    cout<<"this is estimated valid for "<<days<<" days"<<endl;

    
    
    int price_small{25};
    int price_large{35};
    double tax_rate{0.06};
    const int estimated_days{30};
    int small_room{0};
    cout<<"enter no of  small rooms"<<endl;
    cin>>small_room;
    int large_room{0};
    cout<<"enter no of big rooms"<<endl;
    cin>>large_room;
    int total_small=(small_room*tax*price_small);
    int total_large=(large_room*tax*price_large);
    int estimate_small=(small_room*price_small);
    int estimate_large=(large_room*price_large);
    cout<<"cost of small rooms is:"<<total_small+estimate_small<<endl;
    cout<<"cost of large rooms is :"<<total_large+estimate_large<<endl;
    cout<<"this is estimated valid for "<<estimated_days<<" days"<<endl;




    return 0;


}
