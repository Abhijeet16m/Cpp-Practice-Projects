#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(long long int n){
    if(n < 0) return false;
    long long int res = 0;
    int temp = n;
    while(temp!=0){
        res = (res*10) + (temp%10);
        temp/=10;
    }
    return (res == n);
}
int main(){
    long long int n; cin>>n;
    cout<<(isPalindrome(n)?"YES":"NO");
    return 0;
}