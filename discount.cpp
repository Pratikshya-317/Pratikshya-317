#include <iostream>
using namespace std;

int main(){
    int amount,discount,pay;
    cout<<"Please Enter your Shopping Amount:";
    cin>>amount;
    
    switch(amount/5000){
        case 0:
               discount=0;
               cout<<"Your 0% Discount:"<<discount<<endl;
               pay=amount-discount;
               cout<<"Amount to be paid: "<<amount<<"-"<<discount<<"="<<pay;
               break;
               
        case 1:
               discount=amount*5/100;
               cout<<"Your 5% Discount:"<<discount<<endl;
               pay=amount-discount;
               cout<<"Amount to be paid: "<<amount<<"-"<<discount<<"="<<pay;
               break;
               
        case 2:
               discount=amount*7/100;
               cout<<"Your 7% Discount:"<<discount<<endl;
               pay=amount-discount;
               cout<<"Amount to be paid: "<<amount<<"-"<<discount<<"="<<pay;
               break;
               
        case 3:
               discount=amount*10/100;
               cout<<"Your 10% Discount:"<<discount<<endl;
               pay=amount-discount;
               cout<<"Amount to be paid: "<<amount<<"-"<<discount<<"="<<pay;
               break;
               
        default:
               discount=amount*12/100;
               cout<<"Your 12% Discount:"<<discount<<endl;
               pay=amount-discount;
               cout<<"Amount to be paid: "<<amount<<"-"<<discount<<"="<<pay;
               break;
    }
}