#include<iostream>
#include<vector>
using namespace std;

class Fibonacci{
    public:
        vector<int> dp;
        int helper(int n){
            if(dp[n] != -1) return dp[n];
            return dp[n] = helper(n-1) + helper(n-2); 
        }
        void caluclate(int n){
            dp.resize(n+1, -1);
            dp[0] = 0;
            dp[1] = 1;
            helper(n);
        }
};

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    Fibonacci *fibo = new Fibonacci();
    fibo->caluclate(n);
    for(int i = 0; i <= n; i++){
        cout<<fibo->dp[i]<<" ";
    }
    return 0;
}