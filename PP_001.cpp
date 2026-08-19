#include<iostream>
using namespace std;

const float PI = 3.14159;

int main(){
    float radius; 
    cin>>radius; 
    cout<<"Circumference = "<<(2*PI*radius)<<endl;
    cout<<"Area = "<<(PI*radius*radius)<<endl;
    return 0;
}