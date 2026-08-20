#include<iostream>
using namespace std;

int main(){
    float p, r, t;
    cout<<"Enter Principle Amount: ";
    cin>>p;
    cout<<"Enter rate: ";
    cin>>r;
    cout<<"Enter time (in years): ";
    cin>>t;
    float si = (p*r*t)/100.0;
    cout<<"Simple Interest = "<<si<<endl;
    return 0;
}