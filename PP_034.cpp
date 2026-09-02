#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter length of sides: ";
    cin>>a>>b>>c;
    if(((a+b) <=c) || ((b+c) <= a) || ((a+c) <= b) || (a <= 0) || (b <= 0) || (c <= 0)){
        cout<<"Invalid trianlge";
    }
    else{
        cout<<"Valid Triangle";
    }
    return 0;
}