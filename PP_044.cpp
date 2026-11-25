#include<bits/stdc++.h>
using namespace std;

int countDigit(int n){
    if(n == 0) return 1;
    if(n < 0) n*=(-1);
    return (int)log10(n) + 1;
}

int main(){
    int n; cin>>n;
    cout<<"Digits in "<<n<<": "<<countDigit(n);
    return 0;
}