#include<iostream>
using namespace std;

int reverseNum(int n){
    int flag = 0;
    if(n < 0){
        n *= -1;
        flag = 1;
    }
    int rev = 0;
    while(n != 0){
        rev = (rev*10)+(n%10);
        n/=10;
    }
    if(flag) rev *= -1;
    return rev;
}

int main(){
    int n;
    cin>>n;
    int m = reverseNum(n);
    cout<<m;
    return 0;
}