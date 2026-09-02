#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter sides: ";
    cin>>a>>b>>c;
    if(((a+b) <=c) || ((b+c) <= a) || ((a+c) <= b) || (a <= 0) || (b <= 0) || (c <= 0)){
        cout<<"Invalid trianlge";
    }
    else{
        if(a == b && b == c) cout<<"Equilateral";
        else if(a == b || b == c || c == a) cout<<"Isosceles";
        else cout<<"Scalene";
    }

    return 0;
}