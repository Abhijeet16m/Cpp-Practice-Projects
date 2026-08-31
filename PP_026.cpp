#include<iostream>
using namespace std;

void divisible_5_11(int n){
    if(n%55 == 0) cout<<n<<" is divisible by both 5 and 11";
    else{
        if(n%11 == 0) cout<<n<<" is divisible by 11";
        else if(n%5 == 0) cout<<n<<" is divisible by 5";
        else cout<<n<<" is not divisible by 5 or 11";
    }
}

int main(){
    int n; cin>>n;
    divisible_5_11(n);
    return 0;
}