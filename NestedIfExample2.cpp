#include <iostream>
using namespace std;
int main()
{
    int length{},width{},height{};
    const int dimension{10};
    double base_cost{2.50};
    double tier1_surcharge{0.10};
    double tier2_surcharge{0.20};
    const int teir1_threshold{100};
    const int teir2_threshold{200};
    int volume{};
    cout<<"enter the length, width, height"<<endl;
    cin>>length>>width>>height;
    if(length>=dimension||width>=dimension||height>=dimension){
        cout<<"package was rejected"<<endl;
    }
    else{
        double package_cost{};
        double package_volume=length*width*height;
        package_cost=base_cost;
        if(package_volume>teir2_threshold)
        {
            package_cost+=(package_cost*tier2_surcharge);
            cout<<"adding to tier 2 surcharge"<<endl;
        }
        else if(package_volume>teir1_threshold)
        {
            package_cost+=(package_cost*tier2_surcharge);
            cout<<"adding to tier 1 surcharge"<<endl;
        }

    }


}