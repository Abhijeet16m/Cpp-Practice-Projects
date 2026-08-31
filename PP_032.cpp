#include<iostream>
using namespace std;

int main(){
    int amount;
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    cin>>amount;
    for(int i: notes){
        int count = amount/i;
        amount %= i;
        if(count != 0){
            if(i >= 10){
                cout<<count<<" Note of "<<i<<" Rupees"<<endl;
            }else{
                cout<<count<<" Coin of "<<i<<" Rupees"<<endl;
            }
        }
    }
    return 0;
}