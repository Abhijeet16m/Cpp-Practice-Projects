#include<iostream>
using namespace std;

void checkNum(int n){
    if(n > 0) cout<<"Positive";
    else if(n < 0) cout<<"Negative";
    else cout<<"Zero";
}

int main(){
    int n; cin>>n;
    checkNum(n);
    return 0;
}