#include<bits/stdc++.h>
using namespace std;

int helper(int n){
    int res = 0;
    while(n!=0){
        res += (n%10);
        n/=10;
    }
    return (res <= 9)? res: helper(res);
}

int main(){
    int n; cin>>n;
    cout<<"Answer: "<<helper(n);
    return 0;
}