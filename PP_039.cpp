#include<iostream>
#include<math.h>
using namespace std;

bool isArmstrong(int n){
    if(n <= 0) return false;
    int digits = (int)log10(n) + 1;
    int temp = n;
    int sum = 0;
    while(temp != 0){
        sum += (int)pow(temp%10, digits);
        temp /= 10;
    }
    return (sum == n);
}

int main(){
    int n;
    cin>>n;
    cout<<isArmstrong(n);   
    return 0;
}