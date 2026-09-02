#include<iostream>
using namespace std;

int naturalSum(int n){
    return (n*(n+1))/2;
}

int main(){
    int n; 
    cin>>n;
    cout<<naturalSum(n);
    return 0;
}