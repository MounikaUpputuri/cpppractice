#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int calc_cost(int base_cost,int tax_amount=0.04,int shipping=20);
void greetings(string name="default", string prefix="Hi", string suffix="Hello");
void print_grocery_list(int apples=5,int oranges=7, int mangoes=10);
int calc_cost(int base_cost,int tax_amount,int shipping)
{
    return base_cost+=(base_cost*tax_amount)+shipping;
}
void greetings(string name, string prefix, string suffix)
{
    cout<<name<<" "+suffix+" "+prefix<<endl;
}
void print_grocery_list(int apples,int oranges, int mangoes){
    
    cout<<apples<<" "<<oranges<<" "<<mangoes<<endl;

}
int main(){
    int amount{0};
    amount=calc_cost(20,30,40);
    cout<<amount<<endl;
   amount= calc_cost(1);
   cout<<amount<<endl;
   amount=calc_cost(1,2);
   cout<<amount<<endl;
   greetings("Mrs","Engineer");
   print_grocery_list();
   print_grocery_list();
    print_grocery_list(3);
    print_grocery_list(7,11);

}