#include<iostream>
using namespace std;

int main(){
    float cp, sp;
    cout<<"Cost Price: ";
    cin>>cp;
    cout<<"Selling Price: ";
    cin>>sp;
    float profit = sp-cp;
    if(profit < 0){
        cout<<"Loss: "<<(-1*profit);
    }else{
        cout<<"Profit: "<<profit;
    }
    return 0;
}