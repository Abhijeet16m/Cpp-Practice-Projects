#include<iostream>
using namespace std;

int main(){
    float celcius;
    cout<<"Enter celcius: ";
    cin>>celcius;
    float fahrenheit = 1.8*celcius + 32;
    cout<<"Fahrenheit = "<<fahrenheit;
    return 0;
}