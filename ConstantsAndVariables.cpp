#include <iostream>
using namespace std;

int main()
{
   std::cout<<"Hello welcome to carpet services"<<endl;
    std::cout<<"how many rooms would like to cleaned?"<<endl;
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
    cout<<"this is estimated valid for "<<days<<"days"<<endl;
    return 0;


}
