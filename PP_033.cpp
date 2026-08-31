#include<iostream>
using namespace std;

int main(){
    float a, b, c;
    cout<<"Enter angles of triangle: ";
    cin>>a>>b>>c;
    if(a+b+c == 180){
        cout<<"Valid Triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
    return 0;
}