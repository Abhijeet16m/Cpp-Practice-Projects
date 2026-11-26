#include<bits/stdc++.h>
using namespace std;

class Multiplication{
    public:
        static void printTable(int n){
            for(int i = 1; i <= 10; i++){
                cout<<n<<" X "<<i<<" = "<<n*i<<endl;
            }
        }
};

int main(){
    int n; cin>>n;
    Multiplication::printTable(n);  
    return 0;
}