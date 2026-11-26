#include<bits/stdc++.h>
using namespace std;

class CurrencyDenomination{
    vector<int> money = {
        500, 200, 100, 50, 20, 10, 5, 2, 1
    };
    public:
    void showDenomination(int n){
        for(int i: money){
            string currency = (i>=10)?"note":"coin"; 
            if(n >= i){
                int amt = n/i;
                n %= i;
                if(amt > 1) currency+='s';
                cout<<amt<<" "<<currency<<" of "<<i<<" Rupee"<<endl;
            }
        }
    }    
};

int main(){
    int n = 1214;
    CurrencyDenomination test = CurrencyDenomination();
    test.showDenomination(n);
    return 0;
}